#pragma once
#ifndef IBRAGIMOV_CPP_2022_HW_2_4_2_H
#define IBRAGIMOV_CPP_2022_HW_2_4_2_H

class LinkedListStack {
public:
    LinkedListStack();
    ~LinkedListStack();
    void push(int value);
    int pop();
    int getTop();
private:
    struct Node {
        int value;
        Node* next;
        Node(int value, Node* next = nullptr) {
            this->value = value;
            this->next = next;
        }
    };
    Node* head;
};

#endif