#include  "HW-2-4-1.h"
#include <iostream>

int main() {
    LinkedList list;

    list.add(1);
    list.add(2);
    list.add(3);

    list.add(1, 4);

    list.remove(2);

    std::cout << list.get(0) << " " << list.get(1) << " " << list.get(2) << std::endl;

    return 0;
}

