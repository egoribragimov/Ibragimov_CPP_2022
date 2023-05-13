#include <iostream>
#include <vector>

void dfsCycle(std::vector<std::vector<int>>& graph) {
    int numVertices = graph.size();
    std::vector<bool> visited(numVertices, false);
    std::vector<int> parent(numVertices, -1);
    bool cycleFound = false;

    for (int start = 0; start < numVertices; ++start) {
        if (visited[start]) {
            continue;
        }

        std::vector<int> stack;
        stack.push_back(start);
        visited[start] = true;

        while (!stack.empty()) {
            int vertex = stack.back();
            stack.pop_back();

            for (int neighbor : graph[vertex]) {
                if (!visited[neighbor]) {
                    stack.push_back(neighbor);
                    visited[neighbor] = true;
                    parent[neighbor] = vertex;
                } else if (parent[vertex] != neighbor) {
                    // Найден цикл
                    cycleFound = true;
                    std::cout << "Cycle found: ";
                    int cycleVertex = vertex;
                    while (cycleVertex != neighbor) {
                        std::cout << cycleVertex << " ";
                        cycleVertex = parent[cycleVertex];
                    }
                    std::cout << neighbor << std::endl;
                    break;
                }
            }

            if (cycleFound) {
                break;
            }
        }

        if (cycleFound) {
            break;
        }
    }

    if (!cycleFound) {
        std::cout << "No cycle found" << std::endl;
    }
}

int main() {
    std::vector<std::vector<int>> graph = {
            {1, 2},
            {2, 3},
            {3, 0},
            {0, 4},
            {4, 1}
    };

    dfsCycle(graph);

    return 0;
}