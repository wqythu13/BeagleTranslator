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
        bool inout;
        Attribute* parameter;

    public:
        string getName() {return this->name;}
        bool getInout() {return this->inout;}
        Attribute* getParameter() {return this->parameter;}
    };
}

#endif //VERIFIER_SIGNAL_H
