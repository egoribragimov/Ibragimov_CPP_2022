#define IBRAGIMOV_CPP_2022_HW_2_4_1_H
#pragma once
#include <iostream>

class LinkedList {
private:
    struct Node {
        int value;
        Node* next;
        Node(int v, Node* n = nullptr) : value(v), next(n) {} // конструктор структуры
    };
    Node* head;

public:
    LinkedList() : head(nullptr) {} //  конструктор класса, создает пустой список
    ~LinkedList(); // деструктор класса

    void add(int value);
    void add(int index, int value);
    void remove();
    void remove(int index);
    int get(int index);
};

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