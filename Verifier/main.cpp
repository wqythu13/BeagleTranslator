#include <iostream>
#include "Translator/Translator.h"
#include "Translator/BeagleTranslator.h"
using namespace esc;

Model* initModel()
{
    // TODO add initModel
    Model* model = new Model();
    model->setName("AliceBob");
    // set Processes
    Process* alice = new Process();
    alice->setProcessName("Alice");
    Type* intType = new Type("int");
    alice->setAttributes(list<Attribute*>{new Attribute(intType, "data"), new Attribute(intType, "m1")});
    // add signals & fst

    model->addProcess(alice);
    Process* bob = new Process();
    bob->setProcessName("Bob");
    bob->setAttributes(list<Attribute*>{new Attribute(intType, "data"), new Attribute(intType, "m2"), new Attribute(intType, "secretData")});
    model->addProcess(bob);
    // set Properties
    // set InitialKnowledge
    return model;
}

int main() {
    //std::cout << "Hello, World!" << std::endl;
    //BeagleTranslator* beagleTranslator = new BeagleTranslator();
    //beagleTranslator->generateBeagle();
    Model* model = initModel();
    BeagleTranslator beagleTranslator;
    beagleTranslator.generateBeagle();
    const char *filePath = "./Beagle/beagle.elt";
    //std::cout << beagleTranslator.saveInFile(filePath);
    return 0;
}