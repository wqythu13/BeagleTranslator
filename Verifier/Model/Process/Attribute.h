//
// Created by wqy on 19-11-26.
//

#ifndef VERIFIER_ATTRIBUTE_H
#define VERIFIER_ATTRIBUTE_H
#include "Type.h"

namespace esc {
    class Attribute {
    private:
        Type* type;
        string identifier;

    public:
        string getIdentifier() {return this->identifier;}
        Type* getType() {return this->type;}
        void setIdentifier(string _identifier);
        void setType(Type* _type);
    };
}

#endif //VERIFIER_ATTRIBUTE_H
