#include <iostream>
#include "LinkedListQueue.cpp"

int main() {
    LinkedListQueue queue;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    std::cout << queue.getFirst() << std::endl;
    queue.dequeue();
    queue.isEmpty();

    return 0;
}