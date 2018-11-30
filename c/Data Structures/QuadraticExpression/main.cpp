#include <iostream>
#include "quadraticExpression.h"

using namespace std;
// using namespace statement includes the entire container specified
using namespace mad_2c;

int main()
{
    quadraticExpression q1, // default constructor values employed
                        q2(1, 1, 1), // a == b == c == 1
                        q3(7.2, 93.22, 9.1023);

    cout << "q1\n"
         << "a: " << q1.getA() << endl
         << "b: " << q1.getB() << endl
         << "c: " << q1.getC() << endl << endl
         << "q2\n"
         << "a: " << q2.getA() << endl
         << "b: " << q2.getB() << endl
         << "c: " << q2.getC() << endl << endl
         << "q3\n"
         << "a: " << q3.getA() << endl
         << "b: " << q3.getB() << endl
         << "c: " << q3.getC() << endl << endl;

    cout << "q1 at x == 0: " << q1.evaluateExpAtX(0) << endl
         << "q2 at x == 0: " << q2.evaluateExpAtX(0) << endl
         << "q1 + q2 at x == 0: "
         << q1.evaluateExpAtX(0) + q2.evaluateExpAtX(0) << endl << endl;

    cout << "q3 at x == 0: " << q3.evaluateExpAtX(0) << endl
         << "q1 + q3 at x == 0: "
         << q1.evaluateExpAtX(0) + q3.evaluateExpAtX(0) << endl
         << "q2 + q3 at x == 0: "
         << q2.evaluateExpAtX(0) + q3.evaluateExpAtX(0) << endl << endl;

    // multiply by r
    quadraticExpression tenTimesQ1 = 10 * q1;
    cout << "q1 * 10 at x == 0: " << tenTimesQ1.evaluateExpAtX(0) << endl;

    quadraticExpression tenTimesQ2 = 10 * q2;
    cout << "q2 * 10 at x == 0: " << tenTimesQ2.evaluateExpAtX(0) << endl;

    quadraticExpression tenTimesQ3 = 10 * q3;
    cout << "q3 * 10 at x == 0: " << tenTimesQ3.evaluateExpAtX(0) << endl;

    cout << endl;
    cout << "q1 * 10 at x == 1: " << tenTimesQ1.evaluateExpAtX(1) << endl;

    cout << "q2 * 10 at x == 1: " << tenTimesQ2.evaluateExpAtX(1)
         << endl
         << "q2\n"
         << "a: " << tenTimesQ2.getA() << endl
         << "b: " << tenTimesQ2.getB() << endl
         << "c: " << tenTimesQ2.getC() << endl << endl;

    cout << "q3 * 10 at x == 1: " << tenTimesQ3.evaluateExpAtX(1)
         << endl
         << "q3\n"
         << "a: " << tenTimesQ3.getA() << endl
         << "b: " << tenTimesQ3.getB() << endl
         << "c: " << tenTimesQ3.getC() << endl << endl;

    cout << "Number of real roots for q1: " << q1.roots() << endl
         << "Number of real roots for q2: " << q2.roots() << endl
         << "Number of real roots for q3: " << q3.roots() << endl
         << "Number of real roots for tenTimesQ1: "
         << tenTimesQ1.roots() << endl
         << "Number of real roots for tenTimesQ2: "
         << tenTimesQ2.roots() << endl
         << "Number of real roots for tenTimesQ3: "
         << tenTimesQ3.roots() << endl;

    cout << "q1 roots: " << q1.smallerRoot() << endl
         /*<< "q2 roots: " << q2.smallerRoot() << endl; fails*/
         << "q3 roots: " << q3.smallerRoot() << " "
         << q3.largerRoot() << endl
         << "tenTimesQ1 roots: " << tenTimesQ1.smallerRoot() << endl
         /*<< "tenTimesQ2 roots: " << tenTimesQ2.largerRoot() << endl; fails because it has 0 roots*/
         << "tenTimesQ3 roots: " << tenTimesQ3.smallerRoot()
         << " " << tenTimesQ3.largerRoot() << endl;

    quadraticExpression q4(1, 4, 4), // x^2 + 4x + 4
                        q5(1, 6, 9), // x^2 + 6x + 9
                        q6(2, 8, 6), // 2x^2 + 8x + 6
                        q7(0, 10, 20), // 10x + 20
                        q8(0, 10, -20), // 10x - 20
                        q9(1, 0, -4); // x^2 - 4

    cout << "q4 roots: " << q4.smallerRoot() << " "
         << q4.largerRoot() << endl
         << "q5 roots: " << q5.smallerRoot() << " "
         << q5.largerRoot() << endl
         << "q6 roots: " << q6.smallerRoot() << " "
         << q6.largerRoot() << endl
         << "q7 root: " << q7.smallerRoot() << endl
         << "q8 root: " << q8.largerRoot() << endl
         << "q9 roots: " << q9.smallerRoot() << " "
         << q9.largerRoot() << endl;

    return 0;
}
