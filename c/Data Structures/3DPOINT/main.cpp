#include <iostream>
#include "point3D.h"

using namespace std;
// Employing using statement provides access to the
// container that is the namespace specified. This
// provides access to all objects or elements of the
// container
using namespace mad_2c;

int main()
{
    point3D point_one,
            point_two(2.9, 7.5, 9.1);

    cout << "Point with default formal parameters used.\n"
         << "Point should have the coordinates (0, 0, 0).\n"
         << "x: " << point_one.getX() << endl
         << "y: " << point_one.getY() << endl
         << "z: " << point_one.getZ() << endl;

    cout << "Point with arguments provided for constructor.\n"
         << "x: " << point_two.getX() << endl
         << "y: " << point_two.getY() << endl
         << "z: " << point_two.getZ() << endl;

    point_one.shiftX(1); // shift point along x-axis
    cout << "point_one x after shift: " << point_one.getX() << endl;
    point_one.shiftY(2); // shift point along y-axis
    cout << "point_one y after shift: " << point_one.getY() << endl;
    point_one.shiftZ(-4); // shift point along z-axis
    cout << "point_one z after shift: " << point_one.getZ() << endl;

    // Are point_one and point_two the same?
    cout << "point_one == point_two: " << (point_one == point_two)
         << endl;

    point_one.rotateAboutX(90); // rotate about x-axis 90 degrees
    cout << "Rotate about x-axis 90 degrees.\n"
         << "x: " << point_one.getX() << endl
         << "y: " << point_one.getY() << endl
         << "z: " << point_one.getZ() << endl;

    point_one.rotateAboutX(-90); // rotate back to original position
    cout << "Rotate about x-axis 90 degrees in opposite direction.\n"
         << "x: " << point_one.getX() << endl
         << "y: " << point_one.getY() << endl
         << "z: " << point_one.getZ() << endl;

    return 0;
}
