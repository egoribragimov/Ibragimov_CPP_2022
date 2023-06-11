//
// Created by egori on 11.06.2023.
//
#include <iostream>
#include "Dictionary.h"

int main() {
    Dictionary dict;

    dict.insert("apple", "1");
    dict.insert("banana", "2");
    dict.insert("car", "3");

    std::cout << dict.search("apple") << std::endl; // Output: 1
    std::cout << dict.search("banana") << std::endl; // Output: 2
    std::cout << dict.search("car") << std::endl; // Output: 3
    std::cout << dict.search("dog") << std::endl; // Output: Key not found

    dict.remove("banana");
    std::cout << dict.search("banana") << std::endl; // Output: Key not found

    return 0;
}