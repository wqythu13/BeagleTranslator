//
// Created by wqy on 19-12-11.
//

#ifndef VERIFIER_ATTRIBUTETERM_H
#define VERIFIER_ATTRIBUTETERM_H
#include "Term.h"
#include "../../Process/Attribute.h"

namespace esc {
    class AttributeTerm : public Term{
    private:
        Attribute* attribute;
    public:
        AttributeTerm();
        AttributeTerm(Attribute* _attribute) {this->attribute = _attribute;}
        string to_string() const;
    };
}
#endif //VERIFIER_ATTRIBUTETERM_H
