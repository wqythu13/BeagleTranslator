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
        Edge() : from(NULL), to(NULL), guard(NULL), actions(list<Action*>{}) {}
        Edge(Vertex* _from, Vertex* _to) : from(_from), to(_to), guard(NULL), actions(list<Action*>{}) {}
        Edge(Vertex* _from, Vertex* _to, Guard* _guard) : from(_from), to(_to), guard(_guard), actions(list<Action*>{}) {}
        Edge(Vertex* _from, Vertex* _to, Guard* _guard, list<Action*> _actions) : from(_from), to(_to), guard(_guard), actions(_actions) {}
        Vertex* getFrom() {return this->from;}
        Vertex* getTo() {return this->to;}
        Guard* getGuard() {return this->guard;}
        list<Action*> getActions() {return this->actions;}
        void setFromVertex(Vertex* _from);
        void serToVertex(Vertex* _to);
        void setGuard(Guard* _guard);
        void setActions(list<Action*> _actions);
        void addAction(Action* _action);
    };
}

#endif //VERIFIER_EDGE_H
