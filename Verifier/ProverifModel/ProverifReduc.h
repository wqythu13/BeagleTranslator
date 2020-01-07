//
// Created by wqy on 20-1-7.
//

#ifndef VERIFIER_PROVERIFREDUC_H
#define VERIFIER_PROVERIFREDUC_H
#include "ProverifVar.h"
#include "ProverifDeclaration.h"
#include <string>
#include <list>
using std::string;
using std::list;

namespace esc {
    class ProverifReduc : public ProverifDeclaration {
    private:
        list<ProverifVar*> vars;
        string formula;
        bool isPrivate;

    public:
        
    };
}
#endif //VERIFIER_PROVERIFREDUC_H
