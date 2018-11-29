#ifndef LINE_SEGMENT_H  // Prevent duplicate compilation
#define LINE_SEGMENT_H

// FILE: lineSegment.h
//
// CLASS PROVIDED: lineSegment
//   class to represent a line segment in 3-Dimensional space
//
// CONSTRUCTOR
//   lineSegment(point3D p1, point3D p2);
//     Precondition: NONE
//     Postcondition: Creates a line segment whose endpoints are
//     represented using point3D objects based on default values if
//     if no arguments are provided by the client or to those
//     specified if the client provides point3D objects are arguments.
//
// PUBLIC MODIFIER FUNCTIONS
//   void changeP1(point3D new_P1);
//     Precondition: NONE:
//     Postcondition: Changes the endpoint p1 of the line segment to
//     that provided as an argument, specifically the copy that is
//     the formal parameter, new_P1.
//   void changeP2(point3D new_P2);
//     Precondition: NONE.
//     Postcondition: Changes the endpoint p2 of the line segment to
//     that provided as an argument, specifically the copy that is
//     the formal parameter, new_P2.
//   void newLine(point3D new_p1, point3D new_P2);
//     Precondition: NONE.
//     Postcondition: Creates a new line whose endpoints are
//     those provided as arguments, new_P1 and new_P2.
//
// PUBLIC ACCESSOR FUNCTIONS
//   point3D getP1() const;
//     Precondition: NONE
//     Postcondition: returns a copy of the p1 endpoint of the line
//     segment
//   point3D getP2() const;
//     Precondition: NONE
//     Postcondition: Returns a copy of the p2 endpoint of the line
//     segment
//   void displayP1() const;
//     Precondition: NONE
//     Postcondition: Displays the coordinates of the p1 endpoint
//   void displayP2() const;
//     Precondition: NONE
//     Postcondition: Displays the coordinates of the p2 endpoint
//   double getLength() const;
//     Precondition: NONE
//     Postcondition: Returns the length of the line segment.
//
// NON-MEMBER FUNCTIONS
//   bool operator ==(const lineSegment& line1, const lineSegment& line2);
//     Precondition: NONE
//     Postcondition: Returns true if line1 and line 2 have the same
//     endpoints.

#include "point3D.h" // Need point3D objects

namespace mad_2c
{
    class lineSegment
    {
    public:
        // Constructor
        lineSegment(point3D new_P1 = point3D(0,0,0), point3D new_P2 = point3D(0,0,0));
        // Modifiers
        void changeP1(point3D new_P1);
        void changeP2(point3D new_P2);
        void newLine(point3D new_P1, point3D new_P2);
        // Accessors
        point3D getP1() const { return p1; }
        point3D getP2() const { return p2; }
        void displayP1() const;
        void displayP2() const;
        double getLength() const;

    private:
        point3D p1, p2;
    };

    // Non-member functions
    bool operator ==(const lineSegment& line1, const lineSegment& line2);
}
#endif