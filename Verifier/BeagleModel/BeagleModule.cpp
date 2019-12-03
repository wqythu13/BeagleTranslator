//
// Created by wqy on 19-12-3.
//

#include "BeagleModule.h"
using namespace esc;

void BeagleModule::setModuleName(string _moduleName){
    this->moduleName = _moduleName;
}

void BeagleModule::addVariable(BeagleVariable* _variable){
    this->variables.push_back(_variable);
}