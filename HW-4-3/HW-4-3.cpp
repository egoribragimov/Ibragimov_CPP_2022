#include <iostream>
#include <string>

using namespace std;

int main() {

    string applicationWithBrackets;
    getline(cin, applicationWithBrackets);
    int positionFirstBracket = applicationWithBrackets.find_first_of('(');
    int positionLastBracket;

    for (int i = 0; i < applicationWithBrackets.length(); i++) {
        if (applicationWithBrackets[i] == ')') {
            positionLastBracket = i;
        }
    }
    string leftPart = applicationWithBrackets.substr(0, positionFirstBracket);

    string rightPart = applicationWithBrackets.substr(positionLastBracket + 1,
                                                      applicationWithBrackets.length() - positionLastBracket);

    cout << leftPart + rightPart;

    return 0;
}