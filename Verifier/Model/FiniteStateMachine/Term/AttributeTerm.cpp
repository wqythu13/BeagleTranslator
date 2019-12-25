//
// Created by wqy on 19-12-11.
//

#include "AttributeTerm.h"
namespace esc {
string AttributeTerm::to_string() const {
    return this->attribute->getIdentifier();
}
}