#include <iostream>

using namespace std;

int main() {
    int reverseMinute, reverseHour;
    cin >> reverseHour >> reverseMinute;
    int minute = abs(60 - reverseMinute);
    int hour = abs(12 - reverseHour);

    if(reverseMinute == 0) {
        minute = 0;
    }

    cout << hour << " " << minute;

    return 0;
}
