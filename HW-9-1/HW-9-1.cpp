#include <iostream>
#include <string>
#include <map>

using namespace std;

int RimToArab(string rimNotation) {
    map<char, int> rim;
    rim['I'] = 1;
    rim['V'] = 5;
    rim['X'] = 10;
    rim['L'] = 50;
    rim['C'] = 100;
    rim['D'] = 500;
    rim['M'] = 1000;

    int temporary = 0;
    int result = 0;

    for (char i: rimNotation) {
        int rimNotation = rim[i];
        if (rimNotation < temporary) {
            result += temporary;
            temporary = rimNotation;
        } else if (rimNotation > temporary) {
            if (temporary == 0) temporary = rimNotation;
            else {
                result += rimNotation - temporary;
                temporary = 0;
            }
        } else if (rimNotation == temporary) {
            result += temporary + rimNotation;
            temporary = 0;
        }
    }

    return result + temporary;
}

string ArabToRim(int arabNotation) {
    string result;

    while (arabNotation >= 1000) {
        result += "M";
        arabNotation - 1000;
    }
    if (arabNotation >= 900){
        result += "CM";
        arabNotation -= 900;
    }

    while (arabNotation >= 500) {
        result += "D";
        arabNotation -= 500;
    }
    if (arabNotation >= 400){
        result += "CD";
        arabNotation -= 400;
    }

    while (arabNotation >= 100) {
        result += "C";
        arabNotation -= 100;
    }
    if (arabNotation >= 90){
        result += "XC";
        arabNotation -= 90;
    }

    while (arabNotation >= 50) {
        result += "L";
        arabNotation -= 50;
    }
    if (arabNotation >= 40){
        result += "XL";
        arabNotation -= 40;
    }

    while (arabNotation >= 10) {
        result += "X";
        arabNotation -= 10;
    }
    if (arabNotation >= 9){
        result += "IX";
        arabNotation -= 9;
    }

    while (arabNotation >= 5) {
        result += "V";
        arabNotation -= 5;
    }
    if (arabNotation >= 4){
        result += "IV";
        arabNotation -= 4;
    }

    while (arabNotation >= 1) {
        result += "I";
        arabNotation -= 1;
    }

    return result;
}

int main() {
    string notationType;
    cin >> notationType;

    if (notationType == "rim") {
        string rimNotation;
        cin >> rimNotation;
        int output = RimToArab(rimNotation);
        cout << output;
    }

    if (notationType == "arab") {
        int arabNotation;
        cin >> arabNotation;
        string output = ArabToRim(arabNotation);
        cout << output;
    }

    return 0;
}