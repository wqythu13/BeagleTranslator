//
// Created by wqy on 19-11-17.
//

#include "BeagleTranslator.h"
#include <iostream>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
using namespace esc;
using namespace std;

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

void BeagleTranslator::makeModules() {

}

void BeagleTranslator::makeProperties() {

}

/// \brief save the beagleModelFile into the file in path.
bool BeagleTranslator::saveInFile(string path) {
    //fopen(path, "w");
    FILE* beagleFile;
    beagleFile = fopen(path.c_str(), "w");

    //int fd = open(path.c_str(), O_WRONLY|O_CREAT);
    //if (beagleFile == NULL)
    //    return false;
    //if (!fd) return false;
    //for (string col : beagleModelFile) {
    //    fwrite(col.c_str(), 1, col.size()+1, beagleFile);
        //cout << col.c_str() << endl;
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