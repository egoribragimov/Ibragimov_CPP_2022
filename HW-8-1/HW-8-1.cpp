#include <iostream>
#include <string>

using namespace std;

void ReadingArray(int array[], int size) {
    for (int i = 0; i < size; i++)
        cin >> array[i];
}

int *FromStringToInt(string inputArrayStrings[], int size) {
    int *outputArray = new int[size];
    for (int i = 0; i < size; i++)
        outputArray[i] = stoi(inputArrayStrings[i]);
    return outputArray;
}

string Join(int array[], int size, string separator) {
    string outputString;
    for (int i = 0; i < size; i++) {
        outputString += to_string(array[i]);
        outputString += separator;
    }
    return outputString;
}

void PrintArray(int *pArray, int size) {
    for (int i = 0; i < size; i++)
        cout << pArray[i] << " ";
}


int main() {

    return 0;
}