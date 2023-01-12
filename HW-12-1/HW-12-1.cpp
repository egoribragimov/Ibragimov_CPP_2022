#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    int N;
    cin >> N;
    string input;
    set<string> myStrings;

    for (int i = 0; i < N; i++) {
        cin >> input;
        myStrings.insert(input);
    }

    cout << myStrings.size();

    return 0;
}