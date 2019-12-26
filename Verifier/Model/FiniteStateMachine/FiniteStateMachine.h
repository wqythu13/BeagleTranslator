//
// Created by wqy on 19-11-27.
//

#ifndef VERIFIER_FINITESTATEMACHINE_H
#define VERIFIER_FINITESTATEMACHINE_H
#include <list>
#include "Vertex.h"
#include "Edge.h"
using std::list;

namespace esc {
    class Process;

    class FiniteStateMachine {
    private:
        Process* process;
        list<Vertex*> vertices;
        list<Edge*> edges;
        Vertex* startVertex;

    public:
        list<Vertex*> getVertices() {return this->vertices;}
        list<Edge*> getEdges() {return this->edges;}
        Vertex* getStartVertex() {return this->startVertex;}
        void setVertices(list<Vertex*> _vertices);
        void addVertex(Vertex* _vertex);
        void setEdges(list<Edge*> _edges);
        void addEdge(Edge* _edge);
        void setStartVertex(Vertex* _startVertex);

    };
}
#endif //VERIFIER_FINITESTATEMACHINE_H
