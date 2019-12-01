//
// Created by wqy on 19-11-27.
//

#ifndef VERIFIER_METHOD_H
#define VERIFIER_METHOD_H
#include <list>
#include "Attribute.h"
using std::list;

namespace esc {
    class Method {
    private:
        string name;
        Type* returnType;
        list<Attribute*> parameters;
    };
}

#endif //VERIFIER_METHOD_H
