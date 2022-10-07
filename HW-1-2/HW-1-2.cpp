//
// Created by Egor on 07.10.2022.
//
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a;
    double b;
    double c;
    double x;
    cout <<"Enter a:";
    cin >> a;
    cout <<"Enter b:";
    cin >> b;
    cout <<"Enter c:";
    cin >> c;
    if  ((b * b - 4 * a * c) >= 0)
    {
        x = ((-1 * b + sqrt(b * b - 4 * a * c) )/ 2 * a);
        cout << "x=" << x << endl;
        x = ((-1 * b - sqrt(b * b - 4 * a * c) )/ 2 * a);
        cout << "x=" << x << endl;
    }
    else
    {
        cout << "No solutions" << endl;
    }
    return 0;
}
