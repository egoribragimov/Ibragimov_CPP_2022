#include <iostream>

using namespace std;

int main() {

    float fullPrice, firstDiscountPrice, secondDiscountPrice, firstDiscount, secondDiscount;
    cin >> fullPrice >> firstDiscountPrice >> secondDiscountPrice >> firstDiscount >> secondDiscount;

    if (fullPrice > firstDiscountPrice & fullPrice <= secondDiscountPrice) {
        cout << fullPrice - (fullPrice * firstDiscount) / 100;
    } else if (fullPrice > secondDiscountPrice) {
        cout << fullPrice - (fullPrice * secondDiscount) / 100;
    } else {
        cout << fullPrice;
    }

    return 0;
}
