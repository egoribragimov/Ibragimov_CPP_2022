#pragma once
#include <vector>
#include <list>

class Graph {

private:
    int numberOfVertices;
    std::vector<std::list<int>> adjacencyList;

public:

    explicit Graph(int countOfVertices);

    ~Graph();

    void addEdge(int src, int dest);

    void printGraph();

    int size();

    const std::list<int>& operator[](int vertex) const {
        return adjacencyList[vertex];
    }
};


