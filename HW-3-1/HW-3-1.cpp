#include <iostream>

using namespace std;

int main() {

    int daysCount;
    cin >> daysCount;
    int temperatureValues[daysCount];
    int sumValues = 0;

    for (int i = 0; i < daysCount; i++) {
        cin >> temperatureValues[i];
        sumValues += temperatureValues[i];
    }

    int average = sumValues / daysCount;
    int amountDaysMoreAverage = 0;

    for (int i = 0; i < daysCount; i++) {
        if (temperatureValues[i] > average) {
            amountDaysMoreAverage++;
        }
    }

    int temperatureMoreAverage[amountDaysMoreAverage];
    int ordinalNumber = 0;

    for (int i = 0; i < daysCount; i++) {
        if (temperatureValues[i] > average) {
            temperatureMoreAverage[ordinalNumber] = i;
            ordinalNumber++;
        }
    }

    cout << amountDaysMoreAverage << endl;

    for (int i = 0; i < ordinalNumber; i++) {
        cout << temperatureMoreAverage[i] << " ";
    }

    return 0;
}