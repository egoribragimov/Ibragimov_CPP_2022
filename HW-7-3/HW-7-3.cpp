#include <iostream>

using namespace std;

int Fibanacci(int n) {
    if (n < 2) {
        return n;
    } else {
        return Fibanacci(n - 1) + Fibanacci(n - 2);
    }
}

int main() {
    int N;
    cin >> N;
    Fibanacci(N);
    cout << Fibanacci(N);

    return 0;
}