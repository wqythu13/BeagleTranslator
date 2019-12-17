//
// Created by wqy on 19-12-17.
//

#ifndef VERIFIER_SIGNALACTION_H
#define VERIFIER_SIGNALACTION_H
#include "Action.h"
#include "../../Process/Signal.h"

namespace esc {
    class SignalAction : public Action {
    private:
        Signal* signal;

    public:
        Signal* getSignal() {return this->signal;}
        int getID();
    };
}

#endif //VERIFIER_SIGNALACTION_H
