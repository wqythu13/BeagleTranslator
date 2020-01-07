//
// Created by wqy on 20-1-6.
//

#include "ProverifTranslator.h"

namespace esc {
void ProverifTranslator::makingStartingProcess() {

}

void ProverifTranslator::makeHeader() {
    //TODO add regular Header & user defined function

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