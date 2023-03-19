#include "HW-2-4-2.h"

LinkedListStack::LinkedListStack() {
    head = nullptr;
}

LinkedListStack::~LinkedListStack() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void LinkedListStack::push(int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

int LinkedListStack::pop() {
    if (head == nullptr) {
        throw "Stack is empty!";
    }
    int value = head->value;
    Node* temp = head;
    head = head->next;
    delete temp;
    return value;
}

int LinkedListStack::getTop() {
    if (head == nullptr) {
        throw "Stack is empty!";
    }
    return head->value;
}