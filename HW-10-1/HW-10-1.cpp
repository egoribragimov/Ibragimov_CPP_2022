#include <iostream>

using namespace std;

const int n = 100;

int main() {
    int a, b, remainder, array[n], period;
    cin >> a >> b;
    double c = ((double) a / b);
    double wholePart = int(c);
    if (a - b > 0) {
        remainder = a % b;
    } else {
        remainder = a;
    }
    for (int i = 1; i < 100; i++) {
        remainder = remainder * 10;
        array[i] = remainder / b;
        if (remainder > b) {
            remainder = remainder - (b * array[i]);
        }
    }
    if (array[1] == array[2]) {
        period = array[1];
    }
    cout << wholePart;
    cout << ",";
    for (int j = 1; array[j] != array[j + 1]; j++) {
        cout << array[j];
        period = array[j + 1];
    }
    cout << "(";
    cout << period;
    cout << ")";
}