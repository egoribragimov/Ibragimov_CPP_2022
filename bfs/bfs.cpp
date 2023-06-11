#include <iostream>
#include <queue>
#include <vector>

void breadthFirstSearch(const std::vector<std::vector<int>>& graph, int startVertex) {
    int numVertices = graph.size();
    std::vector<bool> visited(numVertices, false); // Массив посещенных вершин
    std::deque<int> deque; // Двусторонняя очередь для обхода

    visited[startVertex] = true;
    deque.push_back(startVertex);

    while (!deque.empty()) {
        int currentVertex = deque.front();
        deque.pop_front();
        std::cout << currentVertex << " ";

        // Просматриваем смежные вершины
        for (int i = 0; i < numVertices; ++i) {
            if (graph[currentVertex][i] != 0 && !visited[i]) {
                visited[i] = true;
                deque.push_back(i);
            }
        }
    }
}

int main() {
    // Пример графа в виде матрицы смежности
    std::vector<std::vector<int>> graph = {
            {0, 1, 1, 0, 0},
            {1, 0, 0, 1, 1},
            {1, 0, 0, 0, 1},
            {0, 1, 0, 0, 0},
            {0, 1, 1, 0, 0}
    };

    int startVertex = 0; // Начальная вершина для обхода

    std::cout << "Breadth-First Search Traversal: ";
    breadthFirstSearch(graph, startVertex);
    std::cout << std::endl;

    return 0;
}


