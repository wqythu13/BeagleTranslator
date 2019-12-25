//
// Created by wqy on 19-12-13.
//

#ifndef VERIFIER_CONSTANTTERM_H
#define VERIFIER_CONSTANTTERM_H
#include "Term.h"

namespace esc {
    class ConstantTerm : public Term {
    private:
        int value;
    public:
        void setValue(int _value);
        int getValue() {return this->value;}
        string to_string() const;
    };
}
#endif //VERIFIER_CONSTANTTERM_H
