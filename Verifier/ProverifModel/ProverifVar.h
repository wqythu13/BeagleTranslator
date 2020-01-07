//
// Created by wqy on 20-1-6.
//

#ifndef VERIFIER_PROVERIFVAR_H
#define VERIFIER_PROVERIFVAR_H
#include <string>
using std::string;

namespace esc {
    class ProverifVar {
    private:
        string name;
        string type;
        bool isPrivate;
    public:
        ProverifVar() : name("") , type(""), isPrivate(false) {}
        ProverifVar(string _name, string _type, bool _isPrivate) : name(_name), type(_type), isPrivate(_isPrivate) {}
    };
}
#endif //VERIFIER_PROVERIFVAR_H
