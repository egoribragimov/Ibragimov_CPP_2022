#include <iostream>
#include <list>
#include <vector>
#include "Graph.h"

Graph::Graph(int countOfVertices) {
    numberOfVertices = countOfVertices;
    adjacencyList.resize(numberOfVertices);
}

Graph::~Graph() {
    for (int i = 0; i < numberOfVertices; ++i) {
        adjacencyList[i].clear();
    }
    adjacencyList.clear();
}


void Graph::addEdge(int src, int dest) {
    if (src >= 0 && src < numberOfVertices && dest >= 0 && dest < numberOfVertices) {
        adjacencyList[src].push_back(dest);
        adjacencyList[dest].push_back(src);
    }
}

void Graph::printGraph() {
    for (int i = 0; i < numberOfVertices; ++i) {
        std::cout << "vertice " << i << " :";
        for (int neighbor: adjacencyList[i]) {
            std::cout << " -> " << neighbor;
        }
        std::cout << std::endl;
    }
}

    int Graph::size() {
        return numberOfVertices;
    }


