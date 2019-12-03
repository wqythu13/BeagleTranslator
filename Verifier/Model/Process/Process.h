//
// Created by wqy on 19-11-18.
//

#ifndef VERIFIER_PROCESS_H
#define VERIFIER_PROCESS_H
#include "Method.h"
#include "Signal.h"
#include "../FiniteStateMachine/FiniteStateMachine.h"

namespace esc {
    class Model;
    class Process {
    private:
        list<Attribute*> attributes;
        list<Method*> methods;
        list<Signal*> signals;
        FiniteStateMachine* fst;
        Model* model;
        string processName;

    public:
        string getProcessName() {return this->processName;}
    };
}

#endif //VERIFIER_PROCESS_H
