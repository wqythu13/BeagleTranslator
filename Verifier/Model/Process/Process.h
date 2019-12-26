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
        list<Attribute*> getAttributes() {return this->attributes;}
        FiniteStateMachine* getFST() {return this->fst;}
        list<Signal*> getSignals() {return this->signals;}
        void setProcessName(string _processName);
        void setAttributes(list<Attribute*> _attributes);
        void addAttribute(Attribute* _attribute);
        void setSignals(list<Signal*> _signals);
        void addSignals(Signal* _signal);
        void setFST(FiniteStateMachine* _fst);
    };
}

#endif //VERIFIER_PROCESS_H
