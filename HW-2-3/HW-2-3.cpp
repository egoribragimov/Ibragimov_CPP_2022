#include <iostream>
#include <string>

using namespace std;

int main() {

    int numberInTheInitialFrameOfReference, initialNumberSystem;
    cin >> numberInTheInitialFrameOfReference >> initialNumberSystem;

    string numberInTheAnotherFrameOfReference;

    while (numberInTheInitialFrameOfReference != 0) {

        numberInTheAnotherFrameOfReference = to_string(numberInTheInitialFrameOfReference % initialNumberSystem) +
        numberInTheAnotherFrameOfReference;
        numberInTheInitialFrameOfReference /= initialNumberSystem;
    }

    cout << numberInTheAnotherFrameOfReference;

}