#include "Graph.h"
#include <queue>
#include <iostream>

void bfsShortestPath(Graph graph, int start, int end);

int main() {
    Graph graph(6);
    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(1,0);
    graph.addEdge(1,3);
    graph.addEdge(1,4);
    graph.addEdge(2,0);
    graph.addEdge(2,4);
    graph.addEdge(3,1);
    graph.addEdge(3,5);
    graph.addEdge(4,1);
    graph.addEdge(4,2);
    graph.addEdge(4,5);
    graph.addEdge(5,3);
    graph.addEdge(5,4);

    int start = 0;
    int end = 5;

    bfsShortestPath(graph, start, end);

    return 0;
}

void bfsShortestPath(Graph graph, int start, int end) {
    std::vector<bool> visited(graph.size(), false);
    std::vector<int> previous(graph.size(), -1);
    std::queue<int> queue;

    visited[start] = true;
    queue.push(start);

    while (!queue.empty()) {
        int currentVertex = queue.front();
        queue.pop();

        if (currentVertex == end) {
            // Путь найден, восстанавливаем его
            std::cout << "The shortest path: ";
            std::vector<int> path;
            int vertex = end;
            while (vertex != -1) {
                path.push_back(vertex);
                vertex = previous[vertex];
            }
            for (int i = path.size() - 1; i >= 0; --i) {
                std::cout << path[i];
                if (i != 0)
                    std::cout << " -> ";
            }
            std::cout << std::endl;
            return;
        }

        for (int neighbor : graph[currentVertex]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                previous[neighbor] = currentVertex;
                queue.push(neighbor);
            }
        }
    }
    std::cout << "No path found" << std::endl;
}


