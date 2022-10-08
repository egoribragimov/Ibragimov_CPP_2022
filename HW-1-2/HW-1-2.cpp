//
// Created by Egor on 07.10.2022.
//
#include <iostream>

#include <cmath>

using namespace std;

int main() {
    double quadratic_coefficient, linear_coefficient, free_member, discriminant;
    cin >> quadratic_coefficient >> linear_coefficient >> free_member;
    discriminant = ((linear_coefficient * linear_coefficient) - 4 * quadratic_coefficient * free_member);

    if (discriminant < 0) {
        cout << "";
    }

    else if (discriminant == 0)  {
        cout << (-1 * linear_coefficient) / (2 * quadratic_coefficient);

    }

    else if (quadratic_coefficient == 0)  {
        cout << (-1 * free_member) / linear_coefficient;
    }

    else {
        cout << (-1 * linear_coefficient + sqrt(discriminant)) / (2 * quadratic_coefficient) << " ";
        cout << (-1 * linear_coefficient - sqrt(discriminant)) / (2 * quadratic_coefficient);
    }

    return 0;
}
