//
// Created by wqy on 19-11-17.
//

#ifndef VERIFIER_MODEL_H
#define VERIFIER_MODEL_H
#include "Process/Process.h"
#include "Pragma/Property.h"
#include "Pragma/InitialKnowledge.h"
#include <string>
#include <list>
using std::string;
using std::list;

namespace esc {
    class Model {
    private:
        string name;
        list<Process*> processes;
        list<Property*> properties;
        list<InitialKnowledge*> initialKnowledges;

    public:
        string getName() {return this->name;}
        list<Process*> getProcesses() {return this->processes;}
        list<Property*> getProperties() {return this->properties;}
        list<InitialKnowledge*> getInitialKnowledge() {return this->initialKnowledges;}
        void setName(string _name);
        void setProcesses(list<Process*> _processes);
        void addProcess(Process* _process);
        void setProperties(list<Property*> _properties);
        void addProperty(Property* _property);
        void setInitialKnowledges(list<InitialKnowledge*> _initialKnowledges);
        void addInitialKnowledge(InitialKnowledge* _initialKnowledge);
    };
}

#endif //VERIFIER_MODEL_H
