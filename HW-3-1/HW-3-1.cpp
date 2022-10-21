#include <iostream>


using namespace std;

int main() {

    int amountDays;
    cin >> amountDays;
    int temperatureValues[amountDays];
    int sumValues = 0;

    for (int i = 0; i < amountDays; i++) {
        cin >> temperatureValues[i];
        sumValues += temperatureValues[i];
    }

    int average = sumValues / amountDays;
    int amountDaysMoreAverage = 0;

    for (int i = 0; i < amountDays; i++) {
        if (temperatureValues[i] > average) {
            amountDaysMoreAverage++;
        }
    }

    int temperatureMoreAverage[amountDaysMoreAverage];
    int ordinalNumber = 0;

    for (int i = 0; i < amountDays; i++) {
        if (temperatureValues[i] > average) {
            temperatureMoreAverage[ordinalNumber] = i;
            ordinalNumber++;
        }
    }


    cout << amountDaysMoreAverage << endl;

    for (int i = 0; i < ordinalNumber; i++) {
        cout << temperatureMoreAverage[i] << " ";
    }

}