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
        ProverifReduc* reduc;
        bool isPrivate;

    public:
        ProverifFunc(string _name, list<string> _types, string _returnType) : name(_name), types(_types), returnType(_returnType), reduc(NULL), isPrivate(false) {}
        ProverifFunc(string _name, list<string> _types, string _returnType, ProverifReduc* _reduc) : name(_name), types(_types), returnType(_returnType), reduc(_reduc), isPrivate(false) {}
        ProverifFunc(string _name, list<string> _types, string _returnType, bool _isPrivate) : name(_name), types(_types), returnType(_returnType), reduc(NULL), isPrivate(_isPrivate) {}
        ProverifFunc(string _name, list<string> _types, string _returnType, ProverifReduc* _reduc, bool _isPrivate) : name(_name), types(_types), returnType(_returnType), reduc(_reduc), isPrivate(_isPrivate) {}
        string toString();
    };
}

#endif //VERIFIER_PROVERIFFUNC_H
