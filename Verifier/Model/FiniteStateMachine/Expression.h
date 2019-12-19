//
// Created by wqy on 19-12-19.
//

#ifndef VERIFIER_EXPRESSION_H
#define VERIFIER_EXPRESSION_H
#include <string>
#include "Term/Term.h"

using std::string;

namespace esc {
    class BinaryOperator {
    private:
        string op;

    public:
        void setOp(string _op);
        string getOp() {return this->op;}
    };

    class Expression {
    private:
        Term* lhs;
        Term* rhs;
        BinaryOperator* op;

    public:
        Term* getLhs() {return this->lhs;}
        Term* getRhs() {return this->rhs;}
        string getOp() {return this->op->getOp();}
    };
}

#endif //VERIFIER_EXPRESSION_H
