//
// Created by wqy on 19-11-26.
//

#ifndef VERIFIER_TYPE_H
#define VERIFIER_TYPE_H
#include <string>
using std::string;

namespace esc {
    class Type {
    private:
        string typeName;
    public:
        const string& getName() const;
    };
}

#endif //VERIFIER_TYPE_H
