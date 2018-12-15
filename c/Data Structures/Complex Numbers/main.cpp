#include <iostream>
#include "complexNumbers.h"

using namespace std;
// include the container that holds the class
using namespace mad_2c;

int main()
{
    complexNumber x, y(7,8);

    cout << "x: " << x << endl
         << "y: " << y << endl;

    x *= -1;

    cout << "x: " << x << endl;

    y *= -1;

    cout << "y: " << y << endl;

    x += (y*2);

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    y -= (x + x);

    cout << "y: " << y << endl;

    cout << "x: " << x << endl;

    x += y;

    cout << "x: " << x << endl;

    x *= x;

    cout << "x: " << x << endl;

    return 0;
}
