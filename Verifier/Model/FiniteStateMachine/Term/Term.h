//
// Created by wqy on 19-12-11.
//

#ifndef VERIFIER_TERM_H
#define VERIFIER_TERM_H
#include <string>
using std::string;

namespace esc {
    class Term {
    private:
    public:
        Term();
        Term(const string& toParse);

        //bool isValidName(string _name);
        //bool containAMethodCall(); //< check if the term has a MethodTerm subclass
    };
}
#endif //VERIFIER_TERM_H
