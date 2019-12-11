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
    };
}

#endif //VERIFIER_MODEL_H
