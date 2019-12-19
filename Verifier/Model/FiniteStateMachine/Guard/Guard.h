//
// Created by wqy on 19-12-19.
//

#ifndef VERIFIER_GUARD_H
#define VERIFIER_GUARD_H
#include <string>
#include "../Expression.h"

using std::string;


namespace esc {
    class Guard {
    private:
        Expression* expression;

    public:
        Expression* getExpression() {return this->expression;}
    };
}

#endif //VERIFIER_GUARD_H
