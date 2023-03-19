#ifndef IBRAGIMOV_CPP_2022_HW_2_4_3_H
#define IBRAGIMOV_CPP_2022_HW_2_4_3_H

class LinkedListQueue {
public:
    LinkedListQueue();
    ~LinkedListQueue();

    void enqueue(int value);
    int dequeue();
    int getFirst() const;
    bool isEmpty() const;

private:
    struct Node {
        int value;
        Node* next;
    };

    Node* front;
    Node* back;
};

#endif
