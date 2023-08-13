#include "LinkedList.h"

LinkedList::~LinkedList() {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void LinkedList::add(int value) {
    head = new Node(value, head);
}

void LinkedList::add(int index, int value) {
    if (index == 0) {
        add(value);
        return;
    }
    Node* prev = head;
    for (int i = 0; i < index - 1; i++) {
        if (prev == nullptr)
            return;
        prev = prev->next;
    }
    if (prev == nullptr)
        return;
    Node* newNode = new Node(value, prev->next);
    prev->next = newNode;
}

void LinkedList::remove() {
    if (head == nullptr)
        return;
    Node* temp = head;
    head = head->next;
    delete temp;
}

void LinkedList::remove(int index) {
    if (index == 0) {
        remove();
        return;
    }
    Node* prev = head;
    for (int i = 0; i < index - 1; i++) {
        if (prev == nullptr || prev->next == nullptr)
            return;
        prev = prev->next;
    }
    if (prev == nullptr || prev->next == nullptr)
        return;
    Node* temp = prev->next;
    prev->next = temp->next;
    delete temp;
}

int LinkedList::get(int index) {
    Node* current = head;
    for (int i = 0; i < index; i++) {
        if (current == nullptr)
            return -1;
        current = current->next;
    }
    if (current == nullptr)
        return -1;
    return current->value;
}