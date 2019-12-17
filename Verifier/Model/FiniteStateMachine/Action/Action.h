//
// Created by wqy on 19-12-11.
//

#ifndef VERIFIER_ACTION_H
#define VERIFIER_ACTION_H
#include "../Term/AttributeTerm.h"

namespace esc {
    class Action {
    public:
        //Action();
        //Action(const string& toParse);
        virtual string to_string() const;
        virtual int getID() = 0; // ID : {1 : AssignmentAction, 2 : SignalAction}
    };
}
#endif //VERIFIER_ACTION_H
