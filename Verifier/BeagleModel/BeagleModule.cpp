//
// Created by wqy on 19-12-3.
//

#include "BeagleModule.h"
using namespace esc;

void InitStatement::setLocation(string _location) {
    this->location = _location;
}

void InitStatement::addActions(esc::Action *_action) {
    this->actions.push_back(_action);
}

void Transition::setFromLoc(string _fromLocation) {
    this->fromLocation = _fromLocation;
}

void Transition::setToLoc(string _toLocation) {
    this->toLocation = _toLocation;
}

void Transition::setLabel(string _label) {
    this->label = _label;
}

void Transition::setActions(list<esc::Action *> _actions) {
    this->actions.clear();
    for (auto _action : _actions)
    {
        if (_action->getID() == 1) // _action == AssignmentAction
            this->actions.push_back(_action);
    }
}

void Transition::addAction(esc::Action *_action) {
    this->actions.push_back(_action);
}

BeagleModule::BeagleModule() {
    this->initStatement = new InitStatement();
}

void BeagleModule::setModuleName(string _moduleName){
    this->moduleName = _moduleName;
}

void BeagleModule::addVariable(BeagleVariable* _variable){
    this->variables.push_back(_variable);
}

void BeagleModule::addLabel(string _label)
{
    this->labels.push_back(_label);
}

void BeagleModule::addLocation(string _location)
{
    this->locations.push_back(_location);
}

void BeagleModule::addTransition(esc::Transition *_transition) {
    this->transitions.push_back(_transition);
}