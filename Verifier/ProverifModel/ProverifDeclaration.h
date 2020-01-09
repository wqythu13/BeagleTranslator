//
// Created by wqy on 20-1-6.
//

#ifndef VERIFIER_PROVERIFDECLARATION_H
#define VERIFIER_PROVERIFDECLARATION_H
#include <string>
using std::string;

namespace esc {
    class ProverifDeclaration {
    private:
        string declaration;

    public:
        virtual string toString() = 0;
    };
}
#endif //VERIFIER_PROVERIFDECLARATION_H
