//
// Created by wqy on 20-1-9.
//

#ifndef VERIFIER_PROVERIFCOMMENT_H
#define VERIFIER_PROVERIFCOMMENT_H
#include "ProverifDeclaration.h"
#include <string>
using std::string;

namespace esc {
    class ProverifCommet : public ProverifDeclaration {
    private:
        string comment;

    public:
        ProverifCommet() : comment("") {}
        ProverifCommet(string _comment) : comment(_comment) {}
        string toString();
    };
}
#endif //VERIFIER_PROVERIFCOMMENT_H
