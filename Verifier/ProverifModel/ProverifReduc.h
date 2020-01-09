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
        ProverifReduc* otherwise;
        bool isPrivate;

    public:
        ProverifReduc(list<ProverifVar*> _vars, string _formula) : vars(_vars), formula(_formula), otherwise(NULL), isPrivate(false) {}
        ProverifReduc(list<ProverifVar*> _vars, string _formula, bool _isPrivate) : vars(_vars), formula(_formula), otherwise(NULL), isPrivate(_isPrivate) {}
        ProverifReduc(list<ProverifVar*> _vars, string _formula, ProverifReduc* _otherwise) : vars(_vars), formula(_formula), otherwise(_otherwise), isPrivate(false) {}
        ProverifReduc(list<ProverifVar*> _vars, string _formula, ProverifReduc* _otherwise, bool _isPrivate) : vars(_vars), formula(_formula), otherwise(_otherwise), isPrivate(_isPrivate) {}
        string toString();
    };
}
#endif //VERIFIER_PROVERIFREDUC_H
