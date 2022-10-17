#include <iostream>
#include <string>

using namespace std;

int main() {

    string firstString, secondString, thirdString;

    cin >> firstString >> secondString >> thirdString;

    if (firstString < secondString && firstString < thirdString) {
        cout << firstString;

    } else if (secondString < firstString && secondString < thirdString) {
        cout << secondString;

    } else
        cout << thirdString;

    return 0;
}
