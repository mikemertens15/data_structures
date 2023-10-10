#ifndef GRAPH_H
#define GRAPH_H

/* Needs the most work */
#include <iostream>
#include <vector>

class Graph {
    private:
        class Vertex {
            public:
                int val;
                std::vector<Vertex*> connected;
                Vertex(int iVal) : val(iVal){};
        };

    public:

        Graph(int root);
        ~Graph();
        void addVertex(int value);
        void addEdge(Vertex* v1, Vertex* v2);
        int removeVertex(int valToRemove);
        void removeEdge(Vertex* v1, Vertex* v2);
        std::vector<Vertex*> getNeighbors(int val);

};

#endif