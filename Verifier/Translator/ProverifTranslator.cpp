//
// Created by wqy on 20-1-6.
//

#include "ProverifTranslator.h"

namespace esc {
void ProverifTranslator::makingStartingProcess() {

}

void ProverifTranslator::makeHeader() {
    //TODO add regular Header & user defined function
    string bitstring = "bitstring";
    ProverifModel* pModel = this->proverifModel;
    pModel->addDeclaration(new ProverifFunc("pk", list<string>{bitstring}, bitstring));
    pModel->addDeclaration(new ProverifFunc("aencrypt", list<string>{bitstring, bitstring}, bitstring));
    pModel->addDeclaration(new ProverifReduc(list<ProverifVar*>{new ProverifVar("x", bitstring), new ProverifVar("y", bitstring)}, "adecrypt (aencrypt (x, pk (y)), y) = x"));
    pModel->addDeclaration(new ProverifFunc("sign", list<string>{bitstring, bitstring}, bitstring));
    // user defined function

}

void ProverifTranslator::makeBlocks() {

}

void ProverifTranslator::generateProverif() {
    //TODO add ProverifTranslator
    makingStartingProcess();
    makeHeader();
    makeBlocks();
}

void ProverifTranslator::setModel(esc::Model *_model) {
    this->model = _model;
}
}