#include <iostream>

using namespace std;

int main() {

    float N, A, B, X, Y;
    cin >> N >> A >> B >> X >> Y;

    if (A > B) {
        cout << "";
    }

    else if (A < B) {
        if (N > A & N <= B) {
            cout << N - (N * X) / 100;
        }

        else if (N > B) {
            cout << N - (N * X) / 100;
        }

        else
            cout << N;
    }
    return 0;
}
