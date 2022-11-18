#include "iostream"

using namespace std;


void insertionSort(int numbers[]) {
    int variableToExchangeValues, amountNumbers = 10;

    for (int i = 0; i < amountNumbers; i++) {

        for (int j = i; j > 0 && numbers[j] < numbers[j - 1]; j--) {
            variableToExchangeValues = numbers[j];
            numbers[j] = numbers[j - 1];
            numbers[j - 1] = variableToExchangeValues;
        }
    }
}

int main() {
    int numbers[10];

    for (int &number: numbers) {
        cin >> number;
    }

    insertionSort(numbers);

    for (int i = 0; i < 10; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}