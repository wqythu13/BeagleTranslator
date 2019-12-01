//
// Created by wqy on 19-11-28.
//

#ifndef VERIFIER_EDGE_H
#define VERIFIER_EDGE_H
#include "Vertex.h"
using std::list;

namespace esc {
    class Edge {
    private:
        Vertex* from;
        Vertex* to;
        //Guard* guard;
        //list<Action*> actions;
    };
}

#endif //VERIFIER_EDGE_H
