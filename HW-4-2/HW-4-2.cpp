#include <iostream>
#include <string>


using namespace std;

int main() {

    string word, minimalPalindrom = "~~~~~~~~~~~~~";
    cin >> word;
    bool presenceOfPalindromeOfTwoSymbols;

    for (int i = 0; i < word.length(); i++) {

        if (word[i] == word[i + 1]) {
            string palindrom = word.substr(i, 2);

            if (palindrom < minimalPalindrom) {
                minimalPalindrom = palindrom;
                presenceOfPalindromeOfTwoSymbols = true;
                break;
            }
        }
    }

    if (!presenceOfPalindromeOfTwoSymbols) {

        for (int i = 0; i < word.length(); i++) {

            if (word[i] == word[i + 2]) {
                string palindrom = word.substr(i, 3);

                if (palindrom < minimalPalindrom) {
                    minimalPalindrom = palindrom;
                }
            }
        }
    }

    cout << minimalPalindrom;

    return 0;
}
