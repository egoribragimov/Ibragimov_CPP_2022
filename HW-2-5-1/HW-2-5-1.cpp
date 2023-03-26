#include <iostream>
#include "Rational.h"
#include "Rational.cpp"
int main() {
    Rational r1(2, 4);
    Rational r2(3, 6); // создание рационального числа 3/6
    Rational r3; // создание рационального числа 0/1

    std::cout << "r1 = ";
    r1.print(); // печать числа r1

    std::cout << "r2 = ";
    r2.print(); // печать числа r2

    // сложение
    r3 = r1 + r2;
    std::cout << "r1 + r2 = ";
    r3.print();

    // вычитание
    r3 = r1 - r2;
    std::cout << "r1 - r2 = ";
    r3.print();

    // умножение
    r3 = r1 * r2;
    std::cout << "r1 * r2 = ";
    r3.print();

    // деление
    r3 = r1 / r2;
    std::cout << "r1 / r2 = ";
    r3.print();

    // сравнение
    std::cout << "r1 == r2 ? ";
    std::cout << (r1 == r2) << std::endl;

    std::cout << "r1 != r2 ? ";
    std::cout << (r1 != r2) << std::endl;

    std::cout << "r1 > r2 ? ";
    std::cout << (r1 > r2) << std::endl;

    std::cout << "r1 >= r2 ? ";
    std::cout << (r1 >= r2) << std::endl;

    std::cout << "r1 < r2 ? ";
    std::cout << (r1 < r2) << std::endl;

    std::cout << "r1 <= r2 ? ";
    std::cout << (r1 <= r2) << std::endl;

    return 0;
}