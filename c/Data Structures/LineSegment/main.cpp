#include <iostream>
#include "lineSegment.h"
#include "point3D.h"

using namespace std;
// to have access to all contents of a namespace container,
// use the using statement
using namespace mad_2c;

int main()
{
    lineSegment l, k(point3D(-3.1, -4.2, -8.9),
                     point3D(3.1, 4.2, 8.9));

    cout << "l Endpoints\n";
    l.displayP1();
    l.displayP2();

    cout << "k Endpoints\n";
    k.displayP1();
    k.displayP2();

    cout << "Length of l: " << l.getLength() << endl;
    cout << "Length of k: " << k.getLength() << endl << endl;

    l.changeP1(point3D(2.0, 4.3, 7.8));

    // display change to endpoints p1 and p2 of linesegment l
    l.displayP1();
    l.displayP2();

    cout << "Length of l: " << l.getLength() << endl << endl;

    cout << "l == k: " << (l == k) << endl << endl;

    lineSegment i(point3D(0, 0, 0), point3D(1, 1, 1)),
                j(point3D(0, 0, 0), point3D(-1, -1, -1));

    cout << "i Endpoints\n";
    i.displayP1();
    i.displayP2();

    cout << "j Endpoints\n";
    j.displayP1();
    j.displayP2();

    cout << "i length == j length: "
         << (i.getLength() == j.getLength()) << endl
         << "i == j: " << (i == j) << endl << endl;

    cout << "Change endpoint of j\n";
    j.changeP2(point3D(1, 1, 1));
    j.displayP1();
    j.displayP2();
    cout << "i == j: " << (i == j) << endl;

    return 0;
}
