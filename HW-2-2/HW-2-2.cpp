#include <iostream>
#include <string>

using namespace std;

int main() {

    string enteredString;
    cin >> enteredString;
    int indexSecondF = 0;
    int amountF = 0;

    for (int i=0; i<enteredString.size(); i++) {

        if (enteredString[i] == 'f') {
            amountF += 1;
            indexSecondF = i;
        }
        if (amountF == 2) {
            break;
        }
    }

    if (amountF == 0) {
        cout << -2;
    }

    if (amountF == 1) {
        cout << -1;
    }

    if (amountF > 1) {
        cout << indexSecondF;
    }

    return 0;
}
