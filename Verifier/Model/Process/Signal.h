//
// Created by wqy on 19-11-27.
//

#ifndef VERIFIER_SIGNAL_H
#define VERIFIER_SIGNAL_H
#include "Attribute.h"

namespace esc {
    class Signal {
    private:
        string name;
        bool inout; /// true => in; false => out;
        Attribute* parameter;

    public:
        Signal() : name(""), inout(false), parameter(NULL) {}
        Signal(string _name, bool _inout, Attribute* _parameter) : name(_name), inout(_inout), parameter(_parameter) {}
        string getName() {return this->name;}
        bool getInout() {return this->inout;}
        Attribute* getParameter() {return this->parameter;}
    };
}

#endif //VERIFIER_SIGNAL_H
