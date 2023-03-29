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

