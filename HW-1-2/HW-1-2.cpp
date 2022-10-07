//
// Created by Egor on 07.10.2022.
//
#include <iostream>
#include <cmath>
     using namespace std;
     int main()
{
    double factor_xx, factor_x, free_member, root;
    cin >> factor_xx ;
    cin >> factor_x;
    cin >> free_member;

    if  ( ( factor_x * factor_x - 4 * factor_xx * free_member ) > 0)
    {
        root = ( ( -1 * factor_x + sqrt (factor_x * factor_x - 4 * factor_xx * free_member) ) / ( 2 * factor_xx ) );
        cout << root << endl;
        root = ( ( -1 * factor_x - sqrt(factor_x * factor_x - 4 * factor_xx * free_member) ) / ( 2 * factor_xx ) );
        cout << root << endl;
    }

    else if ( ( factor_x * factor_x - 4 * factor_xx * free_member) == 0 )
    {
        root = ( ( -1 * factor_x + sqrt (factor_x * factor_x - 4 * factor_xx * free_member) ) / ( 2 * factor_xx ) );
        cout << root << endl;
    }

    return 0;
}
