//
// Created by wqy on 19-12-3.
//

#ifndef VERIFIER_BEAGLEMODULE_H
#define VERIFIER_BEAGLEMODULE_H
#include <string>
#include <list>
#include "BeagleVariable.h"
using std::string;
using std::list;

namespace esc {
    class BeagleModule {
    private:
        string moduleName;
        list<BeagleVariable*> variables;
        list<string> labels;
        list<string> locations;

    public:
        void setModuleName(string _moduleName);
        void addVariable(BeagleVariable* _variable);
        void addLabel(string _label);
        void addLocation(string _location);
    };
}
#endif //VERIFIER_BEAGLEMODULE_H
