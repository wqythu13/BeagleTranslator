#include <iostream>
#include "Translator/Translator.h"
#include "Translator/BeagleTranslator.h"
using namespace esc;

FiniteStateMachine* getAliceFST()
{
    FiniteStateMachine* aliceFST = new FiniteStateMachine();
    Vertex* Init = new Vertex("INIT");
    Vertex* mM = new Vertex("makingMessage");
    Vertex* sM = new Vertex("sendingMessage");
    Vertex* bF = new Vertex("beforeFinish");
    Vertex* error = new Vertex("error");
    aliceFST->setVertices(list<Vertex*>{Init, mM, sM, bF, error});
    aliceFST->setStartVertex(Init);
    // add FST edges
    Edge* INIT2mM = new Edge(Init, mM);
    Edge* mM2sM = new Edge(mM, sM);
    Edge* sM2bF = new Edge(sM, bF);
    Edge* bF2error = new Edge(bF, error);
    aliceFST->setEdges(list<Edge*>{INIT2mM, mM2sM, sM2bF, bF2error});
    return aliceFST;
}

FiniteStateMachine* getBobFST()
{
    FiniteStateMachine* bobFST = new FiniteStateMachine();
    Vertex* Init = new Vertex("INIT");
    Vertex* wFM = new Vertex("waitingForMessage");
    Vertex* mD = new Vertex("messageDecrypt");
    Vertex* mDed = new Vertex("messageDecrypted");
    Vertex* sDR = new Vertex("secretDataReceived");
    bobFST->setVertices(list<Vertex*>{Init, wFM, mD, mDed, sDR});
    bobFST->setStartVertex(Init);
    //add FST edges
    Edge* INIT2wFM = new Edge(Init, wFM);
    Edge* wFM2mD = new Edge(wFM, mD);
    Edge* mD2mDed = new Edge(mD, mDed);
    Edge* mDed2sDR = new Edge(mDed, sDR);
    bobFST->setEdges(list<Edge*>{INIT2wFM, wFM2mD, mD2mDed, mDed2sDR});
    return bobFST;
}

Model* initModel()
{
    // TODO add initModel
    Model* model = new Model();
    model->setName("AliceBob");

    // set Processes
    Process* alice = new Process();
    alice->setProcessName("Alice");

    Type* intType = new Type("int");

    // alice attribute
    Attribute* _data = new Attribute(intType, "data");
    Attribute* _m1 = new Attribute(intType, "m1");

    // bob attribute
    Attribute* _bob_data = new Attribute(intType, "data");
    Attribute* _m2 = new Attribute(intType, "m2");
    Attribute* _secretData = new Attribute(intType, "secretData");

    alice->setAttributes(list<Attribute*>{_data, _m1});

    // add signals
    Signal* aliceSignal = new Signal("channel", false, _m1);
    alice->setSignals(list<Signal*>{aliceSignal});

    // add fst
    FiniteStateMachine* aliceFST = getAliceFST();
    alice->setFST(aliceFST);

    model->addProcess(alice);

    Process* bob = new Process();
    bob->setProcessName("Bob");

    bob->setAttributes(list<Attribute*>{_bob_data, _m2, _secretData});

    Signal* bobSignal = new Signal("channel", true, _m2);
    bob->setSignals(list<Signal*>{bobSignal});

    FiniteStateMachine* bobFST = getBobFST();
    bob->setFST(bobFST);

    model->addProcess(bob);
    // set Properties
    SafetyProperty* p1 = new SafetyProperty("");
    model->setProperties(list<Property*>{p1});
    // set InitialKnowledge
    model->setInitialKnowledges(list<InitialKnowledge*>{});
    return model;
}

int main() {
    //std::cout << "Hello, World!" << std::endl;
    //BeagleTranslator* beagleTranslator = new BeagleTranslator();
    //beagleTranslator->generateBeagle();
    Model* model = initModel();
    BeagleTranslator beagleTranslator;
    beagleTranslator.setModel(model);
    beagleTranslator.generateBeagle();
    const char *filePath = "./Beagle/beagle.elt";
    std::cout << beagleTranslator.saveInFile(filePath);
    return 0;
}