//
// Created by wqy on 19-12-11.
//

#ifndef VERIFIER_ASSIGNMENTACTION_H
#define VERIFIER_ASSIGNMENTACTION_H
#include "Action.h"

namespace esc {
    class AssignmentAction : public Action {
    private:
        AttributeTerm* lhs; //< leftHand of the assignment
        Term* rhs;          //< rightHand can be an attribute or a method call
    public:
        //AssignmentAction();
        //AssignmentAction(const string& toParse);
        void setLhs(Attribute* _attribute);
        void setRhs(Term* _rhs);
        string to_string() const;
    };
}

#endif //VERIFIER_ASSIGNMENTACTION_H
