#include "iostream"
#include "string"

using namespace std;

int main() {

    string word;
    cin >> word;
    int coincidences = 0;

    for (int i = 0; i < word.length(); i++) {

        if (word[i] == word[word.length() - i - 1]) {
            coincidences++;
        } else break;
    }

    if (coincidences == word.length()) {
        cout << "true";
    } else cout << "false";

    return 0;
}