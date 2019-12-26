//
// Created by wqy on 19-11-18.
//

#include "Process.h"
namespace esc{
void Process::setProcessName(string _processName) {
    this->processName = _processName;
}

void Process::setAttributes(list<esc::Attribute *> _attributes) {
    this->attributes = _attributes;
}

void Process::addAttribute(esc::Attribute *_attribute) {
    this->attributes.push_back(_attribute);
}

void Process::setSignals(list<esc::Signal *> _signals) {
    this->signals = _signals;
}

void Process::addSignals(esc::Signal *_signal) {
    this->signals.push_back(_signal);
}

void Process::setFST(esc::FiniteStateMachine *_fst) {
    this->fst = _fst;
}
}