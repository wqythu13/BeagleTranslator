//
// Created by wqy on 19-11-17.
//

#include "BeagleTranslator.h"
#include "../Model/FiniteStateMachine/Term/ConstantTerm.h"
#include "../Model/FiniteStateMachine/Action/SignalAction.h"
#include "../BeagleModel/BeagleGuard.h"
#include <iostream>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include <cstring>
#include <typeinfo>

using namespace esc;
using namespace std;

/// \breif make module header info from model, including variables', labels' and locations' definition
void BeagleTranslator::makeHeader() {
    list<Process*> mProcesses;
    mProcesses = this->model->getProcesses();
    for (auto process : mProcesses)
    {
        BeagleModule* beagleModule = new BeagleModule();
        //get and set moduleName
        string moduleName = process->getProcessName();
        beagleModule->setModuleName(moduleName);
        //add module variables
        list<Attribute*> moduleAttributes = process->getAttributes();
        for (auto attribute : moduleAttributes)
        {
            BeagleVariable* variable = new BeagleVariable();
            variable->setName(attribute->getIdentifier());
            variable->setLen(256);
            beagleModule->addVariable(variable);
        }
        //add module labels
        list<Signal*> moduleSignals = process->getSignals();
        for (auto signal : moduleSignals)
        {
            string labelName = signal->getName();
            beagleModule->addLabel(labelName);
        }
        //add module locations
        list<Vertex*> moduleVertices = process->getFST()->getVertices();
        for (auto vertex : moduleVertices)
        {
            string locationName = vertex->getName();
            beagleModule->addLocation(locationName);
        }
        //add beagleModule into beagleModel list
        this->beagleModel->addModule(beagleModule);
    }
}

/// \brief make beagle modules from model processes
/// 1. set the init state from initialknowledge
/// 2. add transitions converted by edges
/// 2.1 get from & to locations
/// 2.2 get assignment actions from edge's actions
/// 2.3 get label info from edge's signal action
void BeagleTranslator::makeModules() {
    list<Process*> processes = this->model->getProcesses();
    for (auto process : processes)
    {
        // find the module correspond to the process in beagleModel
        BeagleModule* module;
        for (auto searchModule : this->beagleModel->getModules())
        {
            if (searchModule->getModuleName() == process->getProcessName())
            {
                module = searchModule;
                break;
            }
        }
        if (module == NULL)
            continue;
        //set init state
        string initStateName = process->getFST()->getStartVertex()->getName();
        module->getInitState()->setLocation(initStateName);
        list<InitialKnowledge*> initialKnowledges = this->model->getInitialKnowledge();
        for (auto initialKnowledge : initialKnowledges)
        {
            if (initialKnowledge->getProcess()->getProcessName() == process->getProcessName())
            {
                Attribute* lhs = initialKnowledge->getAttribute();
                AssignmentAction* initAction = new AssignmentAction();
                initAction->setLhs(lhs);
                ConstantTerm* term = new ConstantTerm();
                term->setValue(0);
                initAction->setRhs(term);
                module->getInitState()->addActions(initAction);
            }
        }
        // add Transitions converted by Edges
        list<Edge*> edges = process->getFST()->getEdges();
        for (auto edge : edges)
        {
            // get from & to location
            string fromLocationName = edge->getFrom()->getName();
            string toLocationName = edge->getTo()->getName();
            Transition *transition = new Transition();
            transition->setFromLoc(fromLocationName);
            transition->setToLoc(toLocationName);
            // set edge actions
            transition->setActions(edge->getActions());
            // find if this edge has a signal action
            bool hasSignal = false;
            Signal* signal;
            for (auto action : edge->getActions()) {
                if (action->getID() == 2) {
                    hasSignal = true;
                    signal = ((SignalAction *) action)->getSignal();
                    break;
                }
            }
            // set transition label from edge's signal action
            if (signal->getInout() == true)
                transition->setLabel(signal->getName());{
                string srcProcessName = "";
                bool hasSrcProcess = false;
                Signal* srcSignal;
                for (auto srcProcess : processes)
                {
                    for (auto _srcSignal : srcProcess->getSignals())
                    {
                        if (_srcSignal->getName() == signal->getName() && _srcSignal->getInout() == false)
                        {
                            hasSrcProcess = true;
                            srcProcessName = srcProcess->getProcessName();
                            srcSignal = _srcSignal;
                            break;
                        }

                    }
                    if (hasSrcProcess == true) break;
                }
                AssignmentAction* assignmentAction = new AssignmentAction();
                assignmentAction->setLhs(signal->getParameter());
                Attribute* rhsAttribute = new Attribute();
                rhsAttribute->setType(srcSignal->getParameter()->getType());
                rhsAttribute->setIdentifier(srcProcessName+"."+srcSignal->getParameter()->getIdentifier());
                AttributeTerm* term = new AttributeTerm(rhsAttribute);
                assignmentAction->setRhs(term);
                transition->addAction(assignmentAction);
            }
            // add transition guard
            Guard* guard = edge->getGuard();
            BeagleGuard* beagleGuard = new BeagleGuard();
            beagleGuard->setLhs(guard->getExpression()->getLhs());
            beagleGuard->setRhs(guard->getExpression()->getRhs());
            beagleGuard->setOpByString(guard->getExpression()->getOp());
            transition->setGuard(beagleGuard);
            // add transition into module
            module->addTransition(transition);
        }
    }
}

/// \breif make beagle properties from model's safety properties
void BeagleTranslator::makeProperties() {
    list<Property*> properties = this->model->getProperties();
    // add SafetyProperty from Pragma
    char* safetyTypeID;
    strcpy(safetyTypeID, typeid(SafetyProperty).name());
    for (auto property : properties)
    {
        if (strcmp(safetyTypeID, typeid(*property).name()) == 0)
        {
            BeagleProperty* beagleProperty = new BeagleProperty();
            string propertyName = ((SafetyProperty*)property)->getSafetyProperty();
            beagleProperty->setProperty(propertyName);
            this->beagleModel->addProperty(beagleProperty);
        }
    }
}

void BeagleTranslator::generateBeagleModelFile()
{
    vector<string> file;
    file.push_back("system");
    string tab = "    ";
    // make beagle model file from beagle model
    for (auto module : this->beagleModel->getModules())
    {
        file.push_back(tab+"module "+module->getModuleName());
        // add module variables
        for (auto variable : module->getVariables())
        {
            string exp = tab+tab+"int[0:256] "+variable->getName()+";";
            file.push_back(exp);
        }
        // add module labels
        string exp = tab+tab+"label ";
        list<string> labels = module->getLabels();
        for (auto label = labels.begin(); label != labels.end(); label++)
        {
            if (label == labels.begin())
            {
                exp += *label;
            }
            else
            {
                exp += ", "+*label;
            }
        }
        exp += ";";
        file.push_back(exp);
        // add module locations
        string locationExp = tab+tab+"location INIT";
        list<string> locations = module->getLocations();
        for (auto location = locations.begin(); location != locations.end(); location++)
        {

            locationExp += ", "+*location;
        }
        locationExp += ";";
        file.push_back(locationExp);
        file.push_back("");
        // add init state
        file.push_back(tab+tab+"init INIT;");
        InitStatement* initStatement = module->getInitState();
        exp = tab+tab+"from INIT to "+initStatement->getLocation();
        if (initStatement->getActions().empty())
        {
            exp += ";";
            file.push_back(exp);
        }
        else
        {
            file.push_back(exp+" do");
            file.push_back(tab+tab+"{");
            for (auto action : initStatement->getActions())
            {
                if (action->getID() == 1)
                {
                    exp = tab+tab+tab;
                    exp += ((AssignmentAction*)action)->getLhs()->getAttribute()->getIdentifier();
                    exp += " = 0;";
                    file.push_back(exp);
                }
            }
            file.push_back(tab+tab+"};");
        }
        // add module transitions
        file.push_back(tab+"end");
        for (auto transition : module->getTransitions())
        {
            // add transition locations
            exp = tab+tab+"from "+transition->getFromLoc()+" to "+transition->getToLoc();
            // add transition label
            if (transition->getLabel() != "")
                exp += " on "+transition->getLabel();
            BeagleGuard* guard = transition->getGuard();
            // add transition guard
            if (guard != NULL)
            {
                exp += " provided ("+guard->getLhs()->to_string()+guard->getOperator()->getOp()+guard->getRhs()->to_string()+")";
            }
            exp += " do {";
            file.push_back(exp);
            // add transition actions
            for (auto action : transition->getActions())
            {
                exp = tab+tab+tab+action->to_string()+";";
                file.push_back(exp);
            }
            file.push_back("};");
        }
    }
    // get property from beagle model
    file.push_back("end");
}

/// \brief save the beagleModelFile into the file in path.
bool BeagleTranslator::saveInFile(string path) {
    // TODO get beagle model file from beagleModel & save into file
    //fopen(path, "w");
    FILE* beagleFile;
    generateBeagleModelFile();
    beagleFile = fopen(path.c_str(), "w");

    //int fd = open(path.c_str(), O_WRONLY|O_CREAT);
    //if (beagleFile == NULL)
    //    return false;
    //if (!fd) return false;
    //for (string col : beagleModelFile) {
    //    fwrite(col.c_str(), 1, col.size()+1, beagleFile);
    //    cout << col.c_str() << endl;
    //}
    //fclose(beagleFile);
    //close(fd);
    //fd=open(path.c_str(), O_RDONLY);
    char buffer[80];
    //int size=read(fd,buffer,sizeof(buffer));
    //close(fd);
    //printf("%s", buffer);
    return true;
}

/// BeagleTranslator's construct function
BeagleTranslator::BeagleTranslator()
{
    this->beagleModel = new BeagleModel();
    this->beagleModelFile = vector<string>{"system", "end"};
}

/// \brief generate beaglemModel from Model* model
void BeagleTranslator::generateBeagle() {
    //string modelName = model->getName();
    makeHeader();
    makeModules();
    makeProperties();
    //cout << "This is BeagleTransltor::generateBeagle()" << endl;
}