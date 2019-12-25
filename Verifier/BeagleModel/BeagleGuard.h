//
// Created by wqy on 19-12-19.
//

#ifndef VERIFIER_BEAGLEGUARD_H
#define VERIFIER_BEAGLEGUARD_H
#include "../Model/FiniteStateMachine/Term/Term.h"

namespace esc {
    class Operator {
    private:
        string op;

    public:
        void setOp(string _op);
        string getOp() {return this->op;}
    };

    class BeagleGuard {
    private:
        Term* lhs;
        Term* rhs;
        Operator* op;

    public:
        void setLhs(Term* _lhs);
        void setRhs(Term* _rhs);
        void setOp(Operator* _op);
        void setOpByString(string _op);
        Term* getLhs() {return this->lhs;}
        Term* getRhs() {return this->rhs;}
        Operator* getOperator() { return this->op;}
    };
}

#endif //VERIFIER_BEAGLEGUARD_H
