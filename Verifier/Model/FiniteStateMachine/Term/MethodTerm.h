//
// Created by wqy on 19-12-12.
//

#ifndef VERIFIER_METHODTERM_H
#define VERIFIER_METHODTERM_H
#include "Term.h"
#include "../../Process/Method.h"

namespace esc {
    class MethodTerm : public Term {
    private:
        list<Term*> args;
        Method* method;
    public:
        // TODO add method to_string
        string to_string() const;
    };
}

#endif //VERIFIER_METHODTERM_H
