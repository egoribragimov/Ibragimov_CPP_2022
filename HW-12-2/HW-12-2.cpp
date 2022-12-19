#include <iostream>

using namespace std;

int Fibanacci(int n) {
    if (n < 2) {
        return n;
    } else {
        return Fibanacci(n - 1) + Fibanacci(n - 2);
    }
}

bool IsPrimeNumber(int number) {
    bool isPrimeNumber = true;
    for (int i = 2; i <= number / 2; ++i) {
        if (number % i == 0) {
            isPrimeNumber = false;
            break;
        }
    }
    return isPrimeNumber;
}

int SumOfPrimeFibanacci(int n) {
    int summary = 0;
    for (int i = 0; i < n; i++) {
        if (IsPrimeNumber(Fibanacci(i))) {
            summary += Fibanacci(i);
        }
    }

    return summary;
}

int main() {
    int N;
    cin >> N;
    cout << SumOfPrimeFibanacci(N);

    return 0;

}