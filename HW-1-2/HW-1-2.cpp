#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double quadraticCoefficient, linearCoefficient, freeTerm;
    cin >> quadraticCoefficient >> linearCoefficient >> freeTerm;

    double discriminant = pow(linearCoefficient, 2) - (4 * quadraticCoefficient * freeTerm);

    if (quadraticCoefficient == 0) {
        cout << -freeTerm / linearCoefficient;
    }

    else if (discriminant > 0) {
        cout << (-linearCoefficient + sqrt(discriminant)) / (2 * quadraticCoefficient);
        cout << " " << (-linearCoefficient - sqrt(discriminant)) / (2 * quadraticCoefficient);
    }

    else if (discriminant == 0) {
        cout << (-linearCoefficient / (2 * quadraticCoefficient));
    }

    return 0;
}