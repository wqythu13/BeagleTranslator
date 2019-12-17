//
// Created by wqy on 19-11-26.
//

#include "Attribute.h"
using namespace esc;

void Attribute::setIdentifier(string _identifier) {
    this->identifier = _identifier;
}

void Attribute::setType(Type* _type) {
    this->type = _type;
}