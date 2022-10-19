#include <iostream>
#include <string>

using namespace std;

int main() {

    int number, numberSystem;
    cin >> number >> numberSystem;

    string resultNumber;

    if (number == 0){
        cout << 0;
    }

    while (number != 0) {

        resultNumber = to_string(number % numberSystem) +
                       resultNumber;
        number /= numberSystem;
    }

    cout << resultNumber;

}