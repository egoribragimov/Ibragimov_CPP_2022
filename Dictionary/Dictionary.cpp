//
// Created by egori on 11.06.2023.
//

#include "Dictionary.h"

#include <iostream>

// Конструктор
Dictionary::Dictionary() {
    for (auto & i : table) {
        i = nullptr;
    }
}

// Деструктор
Dictionary::~Dictionary() {
    for (auto currentNode : table) {
        while (currentNode != nullptr) {
            Node* nextNode = currentNode->next;
            delete currentNode;
            currentNode = nextNode;
        }
    }
}

// Хеш-функция для вычисления индекса в хеш-таблице
int hashFunction(const std::string& key) {
    int sum = 0;
    for (char c : key) {
        sum += c;
    }
    return sum % TABLE_SIZE;
}

// Вставка элемента
void Dictionary::insert(const std::string& key, const std::string& value) {
    int index = hashFunction(key);
    Node* newNode = new Node;
    newNode->key = key;
    newNode->value = value;
    newNode->next = nullptr;

    if (table[index] == nullptr) {
        table[index] = newNode;
    } else {
        Node* currentNode = table[index];
        while (currentNode->next != nullptr) {
            currentNode = currentNode->next;
        }
        currentNode->next = newNode;
    }
}

// Поиск элемента
std::string Dictionary::search(const std::string& key) {
    int index = hashFunction(key);
    Node* currentNode = table[index];
    while (currentNode != nullptr) {
        if (currentNode->key == key) {
            return currentNode->value;
        }
        currentNode = currentNode->next;
    }
    return "Key not found";
}

// Удаление элемента
void Dictionary::remove(const std::string& key) {
    int index = hashFunction(key);
    Node* currentNode = table[index];
    Node* prevNode = nullptr;

    while (currentNode != nullptr) {
        if (currentNode->key == key) {
            if (prevNode == nullptr) {
                table[index] = currentNode->next;
            } else {
                prevNode->next = currentNode->next;
            }
            delete currentNode;
            return;
        }
        prevNode = currentNode;
        currentNode = currentNode->next;
    }
    std::cout << "Key not found. Removal failed." << std::endl;
}
