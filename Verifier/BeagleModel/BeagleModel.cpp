//
// Created by wqy on 19-12-3.
//
#include "BeagleModel.h"
using namespace esc;

void BeagleModel::addModule(BeagleModule* _module)
{
    this->modules.push_back(_module);
}