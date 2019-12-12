//
// Created by wqy on 19-11-26.
//

#ifndef VERIFIER_INITIALKNOWLEDGE_H
#define VERIFIER_INITIALKNOWLEDGE_H
#include "../Process/Process.h"

namespace  esc {
    class InitialKnowledge {
    private:
        Process* process;
        Attribute* attribute;

    public:
        Process* getProcess() {return this->process;}
        Attribute* getAttribute() {return this->attribute;}
    };
}

#endif //VERIFIER_INITIALKNOWLEDGE_H
