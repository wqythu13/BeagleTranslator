//
// Created by wqy on 19-12-26.
//

#include "Model.h"
namespace esc{
void Model::setName(string _name) {
    this->name = _name;
}

void Model::setProcesses(list<esc::Process *> _processes) {
    this->processes = _processes;
}

void Model::addProcess(esc::Process *_process) {
    this->processes.push_back(_process);
}

void Model::setProperties(list<esc::Property *> _properties) {
    this->properties = _properties;
}

void Model::addProperty(esc::Property *_property) {
    this->properties.push_back(_property);
}

void Model::setInitialKnowledges(list<esc::InitialKnowledge *> _initialKnowledges) {
    this->initialKnowledges = _initialKnowledges;
}

void Model::addInitialKnowledge(esc::InitialKnowledge *_initialKnowledge) {
    this->initialKnowledges.push_back(_initialKnowledge);
}
}