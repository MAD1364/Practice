#include <iostream>
#include "balance.h"

using namespace std;
// using namespace employs the container specified by the namespace
using namespace mad_2c;

int main()
{
    balance b1, b2, b3(2000, 0.1);

    cout << "b1 == b2: " << (b1 == b2) << endl << endl
         << "b1 balance: " << b1.getBalance() << endl
         << "b1 rate: " << b1.getRate() << endl << endl
         << "b2 balance: " << b2.getBalance() << endl
         << "b2 rate: " << b2.getRate() << endl << endl;

    b1.deposit(1000);
    b1.changeInterestRate(0.05);

    cout << "b1 == b2: " << (b1 == b2) << endl
         << "Add Interest for 12 months: ";
    b1.addInterest(12);
    cout << b1.getBalance() << endl;

    cout << "b1 balance: " << b1.getBalance() << endl
         << "b1 rate: " << b1.getRate() << endl
         << "b3 balance: " << b3.getBalance() << endl
         << "b3 rate: " << b3.getRate() << endl << endl
         << "b1 == b3: " << (b1 == b3) << endl;

    return 0;
}
