#include <iostream>

using namespace std;

int main() {

    float fullPrice, priceX, priceY, discountX, discountY;
    cin >> fullPrice >> priceX >> priceY >> discountX >> discountY;

    if (fullPrice > priceX & fullPrice <= priceY) {
        cout << fullPrice - (fullPrice * discountX) / 100;
        }

    else if (fullPrice > priceY) {
        cout << fullPrice - (fullPrice * discountY) / 100;
        }

    else {
        cout << fullPrice;
    }
    return 0;
}
