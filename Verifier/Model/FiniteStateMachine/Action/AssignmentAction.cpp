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
    string exp = "";
    exp += this->lhs->to_string()+"=";
    exp += this->rhs->to_string();
    return exp;
}

int AssignmentAction::getID() {
    return 1;
}
