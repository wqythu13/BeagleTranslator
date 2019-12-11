//
// Created by wqy on 19-12-11.
//

#ifndef VERIFIER_ATTRIBUTETERM_H
#define VERIFIER_ATTRIBUTETERM_H
#include "Term.h"
#include "../../Process/Attribute.h"

namespace esc {
    class AttributeTerm {
    private:
        Attribute* attribute;
    public:
        string to_string() const;
    };
}
#endif //VERIFIER_ATTRIBUTETERM_H
