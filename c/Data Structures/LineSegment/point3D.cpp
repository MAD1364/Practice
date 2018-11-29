#include "point3D.h"
#include <cmath> // for trigonometric functions sin and cos

namespace mad_2c
{
    // CONSTRUCTOR
    point3D::point3D(double new_x, double new_y, double new_z)
    {
        x = new_x;
        y = new_y;
        z = new_z;
    }

    // PUBLIC MODIFIER FUNCTIONS
    void point3D::setPosition(double new_x, double new_y, double new_z)
    {
        x = new_x;
        y = new_y;
        z = new_z;
    }

    void point3D::shiftX(double x_shift)
    {
        x += x_shift;
    }

    void point3D::shiftY(double y_shift)
    {
        y += y_shift;
    }

    void point3D::shiftZ(double z_shift)
    {
        z += z_shift;
    }

    void point3D::rotateAboutX(double theta)
    {
        y = y * cos(theta*3.14/180) - z * sin(theta*3.14/180);
        z = y * sin(theta*3.14/180) + z * cos(theta*3.14/180);
    }

    void point3D::rotateAboutY(double theta)
    {
        x = x * cos(theta*3.14/180) + z * sin(theta*3.14/180);
        z = -x * sin(theta*3.14/180) + z * cos(theta*3.14/180);
    }

    void point3D::rotateAboutZ(double theta)
    {
        x = x * cos(theta*3.14/180) - y * sin(theta*3.14/180);
        y = x * sin(theta*3.14/180) + y * cos(theta*3.14/180);
    }

    // NON-MEMBER FUNCTION(S)
    bool operator ==(const point3D& p1, const point3D& p2)
    {
        return (p1.getX() == p2.getX() &&
                p1.getY() == p2.getY() &&
                p1.getZ() == p2.getZ());
    }
}