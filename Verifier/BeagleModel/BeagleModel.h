//
// Created by wqy on 19-11-17.
//

#ifndef VERIFIER_BEAGLEMODEL_H
#define VERIFIER_BEAGLEMODEL_H
#include "BeagleModule.h"
#include "BeagleProperty.h"
#include <list>
using std::list;

namespace esc {
    class BeagleModel {
    private:
        list<BeagleModule*> modules;
        list<BeagleProperty*> properties;

    public:
        void addModule(BeagleModule* _module);
        void addProperty(BeagleProperty* _property);
        list<BeagleModule*> getModules() {return this->modules;}
    };
}

#endif //VERIFIER_BEAGLEMODEL_H
