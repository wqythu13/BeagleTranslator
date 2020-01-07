//
// Created by wqy on 20-1-7.
//

#ifndef VERIFIER_PROVERIFFUNC_H
#define VERIFIER_PROVERIFFUNC_H
#include "ProverifReduc.h"
#include "ProverifDeclaration.h"
#include <string>
#include <list>
using std::string;
using std::list;

namespace esc {
    class ProverifFunc : public ProverifDeclaration {
    private:
        string name;
        list<string> types;
        string returnType;
        bool isPrivate;
        //ProverifReduc* proverifReduc;
    };
}

#endif //VERIFIER_PROVERIFFUNC_H
