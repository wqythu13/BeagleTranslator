//
// Created by wqy on 19-12-13.
//

#include "ConstantTerm.h"
using namespace esc;

void ConstantTerm::setValue(int _value) {
    this->value = _value;
}

string ConstantTerm::to_string() const {
    return std::to_string(this->value);
}