//
// Created by wqy on 19-11-28.
//

#ifndef VERIFIER_VERTEX_H
#define VERIFIER_VERTEX_H
#include <string>
#include <list>
using std::string;
using std::list;

namespace esc {
    class Edge;

    class Vertex{
    private:
        string name;
        //list<Edge*> nexts;
    public:
        Vertex() : name("") {}
        Vertex(string _name) : name(_name) {}
        string getName(){return this->name;}
        void setName(string _name);
    };
}

#endif //VERIFIER_VERTEX_H
