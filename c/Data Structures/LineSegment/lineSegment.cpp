#include "lineSegment.h"
#include <iostream> // cout to display endpoint coordinates
#include <cmath> // need for sqrt and pow functions

namespace mad_2c
{
// CONSTRUCTOR
//   lineSegment(point3D p1, point3D p2);
//     Precondition: NONE
//     Postcondition: Creates a line segment whose endpoints are
//     represented using point3D objects based on default values if
//     if no arguments are provided by the client or to those
//     specified if the client provides point3D objects are arguments.
    lineSegment::lineSegment(point3D new_P1, point3D new_P2)
    {
        p1 = new_P1;
        p2 = new_P2;
    }

// PUBLIC MODIFIER FUNCTIONS
//   void changeP1(point3D new_P1);
//     Precondition: NONE:
//     Postcondition: Changes the endpoint p1 of the line segment to
//     that provided as an argument, specifically the copy that is
//     the formal parameter, new_P1.
    void lineSegment::changeP1(point3D new_P1)
    {
        p1 = new_P1;
    }

//   void changeP2(point3D new_P2);
//     Precondition: NONE.
//     Postcondition: Changes the endpoint p2 of the line segment to
//     that provided as an argument, specifically the copy that is
//     the formal parameter, new_P2.
    void lineSegment::changeP2(point3D new_P2)
    {
        p2 = new_P2;
    }
//   void newLine(point3D new_p1, point3D new_P2);
//     Precondition: NONE.
//     Postcondition: Creates a new line whose endpoints are
//     those provided as arguments, new_P1 and new_P2.
    void lineSegment::newLine(point3D new_P1, point3D new_P2)
    {
        p1 = new_P1;
        p2 = new_P2;
    }

// PUBLIC ACCESSOR FUNCTIONS
//   void displayP1() const;
//     Precondition: NONE
//     Postcondition: Displays the coordinates of the p1 endpoint
    void lineSegment::displayP1() const
    {
        std::cout << "P1: (" << p1.getX() << ", " << p1.getY()
             << ", " << p1. getZ() << ")\n";
    }

//   void displayP2() const;
//     Precondition: NONE
//     Postcondition: Displays the coordinates of the p2 endpoint
    void lineSegment::displayP2() const
    {
        std::cout << "P2: (" << p2.getX() << ", " << p2.getY()
             << ", " << p2.getZ() << ")\n";
    }

//   double getLength() const;
//     Precondition: NONE
//     Postcondition: Returns the length of the line segment.
    double lineSegment::getLength() const
    {
        return sqrt(pow((p1.getX() - p2.getX()), 2.0) +
                    pow((p1.getY() - p2.getY()), 2.0) +
                    pow((p1.getZ() - p2.getZ()), 2.0));
    }

// NON-MEMBER FUNCTIONS
//   bool operator ==(const lineSegment& line1, const lineSegment& line2);
//     Precondition: NONE
//     Postcondition: Returns true if line1 and line 2 have the same
//     endpoints.
    bool operator ==(const lineSegment& line1, const lineSegment& line2)
    {
        return ((line1.getP1() == line2.getP1()) &&
                (line1.getP2() == line2.getP2()));
    }
}