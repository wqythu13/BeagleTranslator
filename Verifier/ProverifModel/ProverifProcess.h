//
// Created by wqy on 20-1-6.
//

#ifndef VERIFIER_PROVERIFPROCESS_H
#define VERIFIER_PROVERIFPROCESS_H
#include <string>
#include <list>
#include "ProverifVar.h"
#include "ProverifDeclaration.h"
using std::string;
using std::list;

namespace esc {
    class ProverifProcess {
    private:
        string name;
        list<ProverifVar*> args;
        list<ProverifDeclaration*> declarations;

    public:
        string getName() {return this->name;}
    };
}
#endif //VERIFIER_PROVERIFPROCESS_H
