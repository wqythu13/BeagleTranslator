//
// Created by wqy on 19-11-28.
//

#ifndef VERIFIER_EDGE_H
#define VERIFIER_EDGE_H
#include "Vertex.h"
#include "Action/Action.h"
#include "Guard/Guard.h"

using std::list;

namespace esc {
    class Edge {
    private:
        Vertex* from;
        Vertex* to;
        Guard* guard;
        list<Action*> actions;

    public:
        Vertex* getFrom() {return this->from;}
        Vertex* getTo() {return this->to;}
        Guard* getGuard() {return this->guard;}
        list<Action*> getActions() {return this->actions;}
    };
}

#endif //VERIFIER_EDGE_H
