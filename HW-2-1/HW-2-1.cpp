#include <iostream>
#include <string>

using namespace std;

int main() {

    string firstString, secondString, thirdString;

    cin >> firstString >> secondString >> thirdString;

    if (firstString <= secondString) {
        if (firstString < thirdString) {
            cout << firstString;
        }else{
            cout << thirdString;
        }
    }

    if (secondString < firstString) {
        if (secondString <= thirdString) {
            cout << secondString;
        }else{
            cout << thirdString;
        }
    }

    return 0;
}
