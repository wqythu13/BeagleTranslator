//
// Created by wqy on 19-11-28.
//

#include "Edge.h"
namespace esc {
void Edge::setFromVertex(esc::Vertex *_from) {
    this->from = _from;
}

void Edge::serToVertex(esc::Vertex *_to) {
    this->to = _to;
}

void Edge::setGuard(esc::Guard *_guard) {
    this->guard = _guard;
}

void Edge::setActions(list<esc::Action *> _actions) {
    this->actions = _actions;
}

void Edge::addAction(esc::Action * _action) {
    this->actions.push_back(_action);
}
}