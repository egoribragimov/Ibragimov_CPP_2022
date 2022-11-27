#include <iostream>
#include <string>

using namespace std;

void ReadingArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

void FromStringToInt(string inputArrayStrings[], int outputArrayInt[], int size) {
    for (int i = 0; i < size; i++) {
        outputArrayInt[i] = stoi(inputArrayStrings[i]);
    }
}

string Join(int array[], string outputString, int size, char separator) {
    for (int i = 0; i < size; i++) {
        outputString += std::to_string(array[i] += separator);
    }
    return outputString;
}

void PrintArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
}


int main() {

    return 0;
}