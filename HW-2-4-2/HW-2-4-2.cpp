#include <iostream>
#include "LinkedListStack.h"
#include "LinkedListStack.cpp"

int main() {
    LinkedListStack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    std::cout << "Top element: " << stack.getTop() << std::endl;
    std::cout << "Pop element: " << stack.pop() << std::endl;
    std::cout << "Pop element: " << stack.pop() << std::endl;
    std::cout << "Top element: " << stack.getTop() << std::endl;
    stack.push(4);
    std::cout << "Top element: " << stack.getTop() << std::endl;
    return 0;
}