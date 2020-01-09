//
// Created by wqy on 20-1-9.
//

#ifndef VERIFIER_PROVERIFCONST_H
#define VERIFIER_PROVERIFCONST_H
#include "ProverifDeclaration.h"
#include <string>
using std::string;

namespace esc {
    class ProverifConst : public ProverifDeclaration {
    private:
        string name;
        string type;

    public:
        ProverifConst(string _name) : name(_name) {}
        ProverifConst(string _name, string _type) : name(_name), type(_type) {}
        string toString();
    };
}
#endif //VERIFIER_PROVERIFCONST_H
