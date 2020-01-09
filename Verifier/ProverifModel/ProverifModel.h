//
// Created by wqy on 20-1-6.
//

#ifndef VERIFIER_PROVERIFMODEL_H
#define VERIFIER_PROVERIFMODEL_H
#include <list>
#include "ProverifProcess.h"
#include "ProverifDeclaration.h"
using std::list;

namespace esc {
    class ProverifModel {
    private:
        ProverifProcess* mainProcess;
        list<ProverifProcess*> processes;
        list<ProverifDeclaration*> declarations;

    public:
        ProverifProcess* getMainProcess() {return this->mainProcess;}
        list<ProverifProcess*> getProcesses() {return this->processes;}
        void setMainProcess(ProverifProcess* _mainProcess);
        void setProcesses(list<ProverifProcess*> _processes);
        void addProcess(ProverifProcess* _process);
        void addDeclaration(ProverifDeclaration* _d);

    };
}

#endif //VERIFIER_PROVERIFMODEL_H
