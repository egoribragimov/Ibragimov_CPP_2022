#include <iostream>

using namespace std;

int main() {
    int reverseMinute, reverseHour;
    cin >> reverseHour >> reverseMinute;
    int minute = (60 - reverseMinute) % 60;
    int hour = (12 - reverseHour) % 12;

    cout << hour << " " << minute;

    return 0;
}
