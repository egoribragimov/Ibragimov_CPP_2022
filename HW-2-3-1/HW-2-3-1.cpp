#include <iostream>

using namespace std;

class LinkedList {
private:
    struct Node {
        int data;
        Node *next;
    };
    Node *head;

public:
    LinkedList() {
        head = NULL;
    }

    void add(int value) {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    void add(int index, int value) {
        Node *newNode = new Node;
        newNode->data = value;

        if (index == 0) {
            newNode->next = head;
            head = newNode;
        } else {
            Node *current = head;
            for (int i = 0; i < index - 1 && current != NULL; i++) {
                current = current->next;
            }
            if (current == NULL) {
                cout << "Index out of range" << endl;
                return;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
    }

    void deleteHead() {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    void deleteNode(int index) {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }
        if (index == 0) {
            Node *temp = head;
            head = head->next;
            delete temp;
        } else {
            Node *current = head;
            for (int i = 0; i < index - 1 && current != NULL; i++) {
                current = current->next;
            }
            if (current == NULL || current->next == NULL) {
                cout << "Index out of range" << endl;
                return;
            }
            Node *temp = current->next;
            current->next = temp->next;
            delete temp;
        }
    }
};