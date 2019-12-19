//
// Created by wqy on 19-12-19.
//

#include "BeagleGuard.h"
namespace esc {

void Operator::setOp(string _op) {
    this->op = _op;
}

void BeagleGuard::setLhs(esc::Term *_lhs) {
    this->lhs = _lhs;
}

void BeagleGuard::setRhs(esc::Term *_rhs) {
    this->rhs = _rhs;
}

void BeagleGuard::setOp(esc::Operator *_op) {
    this->op = _op;
}

void BeagleGuard::setOpByString(string _op) {
    this->op->setOp(_op);
}

}