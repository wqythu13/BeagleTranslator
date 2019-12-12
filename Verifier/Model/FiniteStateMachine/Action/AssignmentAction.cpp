//
// Created by wqy on 19-12-11.
//

#include "AssignmentAction.h"
using namespace esc;

/*AssignmentAction::AssignmentAction() {
    this->lhs = NULL;
    this->rhs = NULL;
}*/

void AssignmentAction::setLhs(esc::Attribute *_attribute) {
    this->lhs = new AttributeTerm(_attribute);
}

void AssignmentAction::setRhs(esc::Term *_rhs) {
    this->rhs = _rhs;
}

string AssignmentAction::to_string() const {
    return "";
}