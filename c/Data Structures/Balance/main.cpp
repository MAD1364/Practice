#include <iostream>
#include "RationalNumbers.h"

using namespace std;
// using namespace allows use of the container specified
using namespace mad_2c;

int main()
{
    rationalNumber r1, r2;

    cout << (r1 == r2) << endl;

    cout << "r1: " << r1 << " r2: " << r2 << endl;

    r1 += r2;

    cout << "r1: " << r1 << " r2: " << r2 << endl;

    cin >> r1;

    cout << "r1: " << r1 << endl;

    cin >> r2;

    cout << "r2: " << r2 << endl;

    r1 += r2;

    r2 *= 3;

    cout << "r1: " << r1 << " r2: " << r2 << endl;

    return 0;
}
