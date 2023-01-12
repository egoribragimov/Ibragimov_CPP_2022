#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

bool comp(int a, int b) {
    return abs(a) < abs(b);
}

int main() {
    int N;
    cin >> N;
    int A[N];

    for (int j = 0; j < N; j++) {
        cin >> A[j];
    }

    sort(A, A + N, comp);

    for (int k = 0; k < N; k++) {
        cout << A[k] << " ";
    }

    return 0;
}