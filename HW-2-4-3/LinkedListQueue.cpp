#include "LinkedListQueue.h"

LinkedListQueue::LinkedListQueue() {
    front = nullptr;
    back = nullptr;
}

LinkedListQueue::~LinkedListQueue() {
    while (!isEmpty()) {
        dequeue();
    }
}

void LinkedListQueue::enqueue(int value) {
    Node* newNode = new Node{ value, nullptr };
    if (isEmpty()) {
        front = newNode;
    }
    else {
        back->next = newNode;
    }
    back = newNode;
}

int LinkedListQueue::dequeue() {
    if (isEmpty()) {
        throw "Queue is empty";
    }
    int value = front->value;
    Node* oldFront = front;
    front = front->next;
    delete oldFront;
    if (front == nullptr) {
        back = nullptr;
    }
    return value;
}

int LinkedListQueue::getFirst() const {
    if (isEmpty()) {
        throw "Queue is empty";
    }
    return front->value;
}

bool LinkedListQueue::isEmpty() const {
    return front == nullptr;
}