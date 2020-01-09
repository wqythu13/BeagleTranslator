//
// Created by wqy on 20-1-6.
//

#include "ProverifModel.h"
namespace esc {
void ProverifModel::setMainProcess(esc::ProverifProcess *_mainProcess) {
    this->mainProcess = _mainProcess;
}

void ProverifModel::setProcesses(list<esc::ProverifProcess *> _processes) {
    this->processes = _processes;
}

void ProverifModel::addProcess(esc::ProverifProcess *_process) {
    this->processes.push_back(_process);
}

void ProverifModel::addDeclaration(esc::ProverifDeclaration *_d) {
    this->declarations.push_back(_d);
}
}