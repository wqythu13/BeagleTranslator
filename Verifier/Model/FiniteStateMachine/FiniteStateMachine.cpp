//
// Created by wqy on 19-11-27.
//

#include "FiniteStateMachine.h"
namespace esc {
void FiniteStateMachine::setVertices(list<esc::Vertex *> _vertices) {
    this->vertices = _vertices;
}

void FiniteStateMachine::addVertex(esc::Vertex *_vertex) {
    this->vertices.push_back(_vertex);
}

void FiniteStateMachine::setEdges(list<esc::Edge *> _edges) {
    this->edges = _edges;
}

void FiniteStateMachine::addEdge(esc::Edge *_edge) {
    this->edges.push_back(_edge);
}

void FiniteStateMachine::setStartVertex(esc::Vertex *_startVertex) {
    this->startVertex = _startVertex;
}
}