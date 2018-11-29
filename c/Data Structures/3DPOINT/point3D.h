#ifndef POINT_3_D // determine whether class is compiled previously
#define POINT_3_D

// FILE: point3D
// CLASS PROVIDED: point3D
//   class to represent a point in 3-dimensional space
//
// CONSTRUCTOR
//   point3D(double x, double y, double z);
//     Precondition: NONE
//     Postcondition: A point will be initialized with the coordinates
//     provided. If none are provided, the point will be initialized
//     by default arguments to the origin of 3-Dimensional space.
//
// PUBLIC MODIFIER FUNCTIONS
//   void setPosition(double new_x, double new_y, double new_z);
//     Precondition: NONE
//     Postcondition: Point is moved or positioned at position
//     specified by formal parameters.
//   void shiftX(double new_x);
//     Precondition: NONE
//     Postcondition: Shifts point along x-axis amount specified by
//     formal parameter
//   void shiftY(double new_y);
//     Precondition: NONE
//     Postcondition: Shifts point along y-axis amount specified by
//     formal parameter
//   void shiftZ(double new_z);
//     Precondition: NONE
//     Postcondition: Shifts point along z-axis amount specified by
//     formal parameter
//   void rotateAboutX(double theta);
//     Precondition: NONE
//     Postcondition: Rotates point about the x-axis theta degrees
//   void rotateAboutY(double theta);
//     Precondition: NONE
//     Postcondition: Rotates point about the y-axis theta degrees
//   void rotateAboutZ(double theta);
//     Precondition: NONE
//     Postcondition: Rotates point about the z-axis theta degrees
//
// PUBLIC ACCESSOR FUNCTIONS
//   double getX() const;
//     Precondition: NONE
//     Postcondition: Returns the x-coordinate of the point
//   double getY() const;
//     Precondition: NONE
//     Postcondition: Returns the y-coordinate of the point
//   double getZ() const;
//     Precondition: NONE
//     Postcondition: Returns the z-coordinate of the point
//
// NON MEMBER FUNCTIONS
//   bool operator ==(const point3D& p1, const point3D& p2);
//     Precondition: NONE
//     Postcondition: Returns true if the x-, y- and z-coordinates
//     of both points are equal.

namespace mad_2c
{
    class point3D
    {
    public:
        // Constructor with default formal parameters set to origin
        point3D(double new_x = 0.0, double new_y = 0.0, double new_z = 0.0);
        // Modifiers
        void setPosition(double new_x, double new_y, double new_z);
        void shiftX(double x_shift);
        void shiftY(double y_shift);
        void shiftZ(double z_shift);
        void rotateAboutX(double theta);
        void rotateAboutY(double theta);
        void rotateAboutZ(double theta);
        // Accessors
        double getX() const { return x; }
        double getY() const { return y; }
        double getZ() const { return z; }

    private:
        double x, y, z;
    };

    // Non-member function declared outside of the class
    bool operator ==(const point3D& p1, const point3D& p2);
}

#endif // POINT_3_D