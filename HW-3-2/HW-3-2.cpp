#include <iostream>

using namespace std;

int main() {
    int reverseMinute, reverseHour;
    cin >> reverseHour >> reverseMinute;
    int minute = 60 - reverseMinute;
    int hour = 12 - reverseHour;

    if (minute == 60) {
        minute = 0;
    }

    if (hour == 12) {
        hour = 0;
    }

    cout << hour << " " << minute;

    return 0;
}
