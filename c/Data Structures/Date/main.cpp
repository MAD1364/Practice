#include <iostream>
#include "date.h"

using namespace std;
// must use container that contains the class to use in order to use it
using namespace mad_2c;

int main()
{
    date d1, d2(7, 31, 2000);

    cout << "d1: " << d1 << endl
         << "d2: " << d2 << endl;

    displayDate(d1);
    displayDate(d2);

    d1.nextDay();
    d2.nextDay();

    cout << "d1: " << d1 << endl
         << "d2: " << d2 << endl;

    displayDate(d1);
    displayDate(d2);

    date d3(12, 31, 2000);

    cout << "d3: " << d3 << endl;

    displayDate(d3);

    d3.nextDay();

    cout << "d3: " << d3 << endl;

    displayDate(d3);

    return 0;
}
