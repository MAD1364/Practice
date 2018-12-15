#include <iostream>
#include <iomanip> // for formatting functions setprecision() and setw()
#include "employee.h"

using namespace std;
// include the contents of the container mad_2c by using the namespace
using namespace mad_2c;

int main()
{
    employee e1, e2("Ballz", 777, 589.9);

    cout << "e1 == e2: " << (e1 == e2) << endl;

    e1.toString();
    e2.toString();

    cout << setprecision(2) << fixed
         << "e1 yearly salary: " << e1.calculateYearlySalary() << endl
         << "e2 yearly Salary: " << e2.calculateYearlySalary() << endl;

    cout << "e1 overtime for 70 hours: " << e1.calculatePay(70) << endl
         << "e2 overtime for 70 hours: " << e2.calculatePay(70) << endl;



    return 0;
}
