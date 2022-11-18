#include "iostream"

using namespace std;

int main() {
    const int amountNumbers = 10;
    int numbers[amountNumbers], variableToExchangeValues;

    for (int &number: numbers) {
        cin >> number;
    }

    for (int i = 0; i < amountNumbers; i++) {

        for (int j = i; j > 0 && numbers[j] < numbers[j - 1]; j--) {
            variableToExchangeValues = numbers[j];
            numbers[j] = numbers[j - 1];
            numbers[j - 1] = variableToExchangeValues;
        }
    }

    for (int number : numbers) {
        cout << number << " ";
    }

    return 0;
}