#include "iostream"

using namespace std;

void bubbleSort() {

    const int amountNumbers = 10;
    int numbers[amountNumbers], variableToExchangeValues;

    for (int & number : numbers) {
        cin >> number;
    }

    for (int k = 0; k < amountNumbers; k++) {
        bool changesHappened = false;

        for (int j = 0; j < amountNumbers - 1 - k; j++) {

            if (numbers[j] > numbers[j + 1]) {
                variableToExchangeValues = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = variableToExchangeValues;
                changesHappened = true;
            }
        }
        if (!changesHappened){
            break;
        }
    }


    for (int number : numbers) {
        cout << number << " ";
    }

}

int main(){
    bubbleSort();

    return 0;
}