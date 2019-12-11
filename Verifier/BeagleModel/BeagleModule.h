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
    class InitStatement {
    private:
        string location;
        //list<Action*> actions;

    public:
        string getLocation() {return this->location;}
        void setLocation(string _location);
    };

    class Transition {
    private:
        string fromLocation, toLocation;
        string label;
        //Guard* guard;
        //list<Action*> actions;

    public:
        string getFromLoc() {return this->fromLocation;}
        string getToLoc() {return this->toLocation;}
        string getLabel() {return this->label;}
        void setFromLoc(string _fromLocation);
        void setToLoc(string _toLocation);
        void setLabel(string _label);
    };

    class BeagleModule {
    private:
        string moduleName;
        list<BeagleVariable*> variables;
        list<string> labels;
        list<string> locations;
        InitStatement* initStatement;
        list<Transition*> transitions;

    public:
        BeagleModule();
        void setModuleName(string _moduleName);
        void addVariable(BeagleVariable* _variable);
        void addLabel(string _label);
        void addLocation(string _location);
        void addTransition(Transition* _transition);
        string getModuleName() {return this->moduleName;}
        InitStatement* getInitState() {return this->initStatement;}
    };
}
#endif //VERIFIER_BEAGLEMODULE_H
