//
// Created by wqy on 20-1-14.
//

#ifndef VERIFIER_PROVERIFEQUATION_H
#define VERIFIER_PROVERIFEQUATION_H
#include "ProverifDeclaration.h"
#include "ProverifVar.h"
#include <string>
#include <list>
using std::string;
using std::list;

namespace esc {
    class ProverifEquation : public ProverifDeclaration {
    private:
        list<ProverifVar*> vars;
        string formula;

    public:
        ProverifEquation(list<ProverifVar*> _vars, string _formula) : vars(_vars), formula(_formula) {}
        string toString();
    };
}

#endif //VERIFIER_PROVERIFEQUATION_H
