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
    };
}
#endif //VERIFIER_ACTION_H
