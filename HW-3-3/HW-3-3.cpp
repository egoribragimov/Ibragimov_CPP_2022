#include <iostream>

using namespace std;

int main() {

    int array[10];
    for (int &i: array) {
        cin >> i;
    }

    int requiredSum;
    cin >> requiredSum;

    int left = 0, right = 9;

    while (left != right) {

        int receivedSum = array[left] + array[right];

        if (receivedSum < requiredSum) {
            left++;
        }

        if (receivedSum > requiredSum) {
            right--;
        }

        if (receivedSum == requiredSum) {
            cout << array[left] << " " << array[right] << endl;
            break;
        }
    }

    return 0;
}