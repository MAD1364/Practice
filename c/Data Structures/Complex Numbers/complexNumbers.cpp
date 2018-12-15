#include "complexNumbers.h"
#include <iostream> // for ostream object

namespace mad_2c
{
// CONSTRUCTOR
//   complexNumber(double real = 0.0, double imaginary = 0.0);
//    Precondition: NONE
//    Postcondition: Sets the parameter values to the members of the
//    object's variables.
    complexNumber::complexNumber(double i_real, double i_imaginary)
    {
        real = i_real;
        imaginary = i_imaginary;
    }

// MODIFICATION FUNCTIONS

// ACCESSOR FUNCTIONS

// NON-MEMBER FUNCTIONS
//   friend bool operator==(const complexNumber& x, const complexNumber& y);
//    Precondition: NONE
//    Postcondition: Returns true if the corresponding parts of the
//    two numbers, x and y, are equal.
    bool operator==(const complexNumber& x, const complexNumber& y)
    {
        return (x.real == y.real && x.imaginary == y.imaginary);
    }

//   friend complexNumber& operator +=(complexNumber& x,
//                                     const complexNumber& y);
//    Precondition: NONE
//    Postcondition: Returns the sum of x and y as a sum of the
//    complex numbers' corresponding parts:
//     (a + bi) + (c + di) = (a + c) + (b + d)i
    complexNumber& operator+=(complexNumber& x, const complexNumber& y)
    {
        x.real += y.real; // facilitates addition of members without forcing cumbersome use of functions to access and modify the members
        x.imaginary += y.imaginary;

        return x;
    }

//   friend complexNumber& operator -=(complexNumber& x,
//                                     const complexNumber& y);
//    Precondition: NONE
//    Postcondition: Returns the difference of the complex numbers
//    x and y: (a + bi) - (c + di) = (a - c) + (b - d)i
    complexNumber& operator-=(complexNumber& x, const complexNumber& y)
    {
        x.real -= y.real;
        x.imaginary -=y.imaginary;

        return x;
    }

//   friend complexNumber& operator *=(complexNumber& x,
//                                     const complexNumber& y);
//    Precondition: NONE
//    Postcondition: Returns the product of the complex numbers x and y
//     (a + bi) * (c + di) = ac + adi + bci + (-1)bd = ac - bd + (ad + bc)i
    complexNumber& operator*=(complexNumber& x, const complexNumber& y)
    {
        double r, i;

        r = (x.real * y.real) - (x.imaginary * y.imaginary);
        i = (x.real * y.imaginary) + (x.imaginary * y.real);

        x.real = r;
        x.imaginary = i;

        return x;
    }

    complexNumber& operator*=(complexNumber& x, int y)
    {
        x.real *= y;
        x.imaginary *= y;

        return x;
    }

    complexNumber& operator*=(complexNumber& x, double y)
    {
        x.real *= y;
        x.imaginary *= y;

        return x;
    }

//   friend complexNumber operator+(complexNumber& x,
//                                  const complexNumber& y);
//    Precondition: NONE
//    Postcondition: Returns the sum of two complex numbers
    complexNumber operator+(const complexNumber& x, const complexNumber& y)
    {
        double r, i;

        r = x.real + y.real;
        i = x.imaginary + y.imaginary;

        return complexNumber(r, i);
    }

//   friend complexNumber operator-(complexNumber& x,
//                                  const complexNumber& y);
//    Precondition: NONE
//    Postcondition: Returns the difference of two complex numbers
    complexNumber operator-(const complexNumber& x, const complexNumber& y)
    {
        double r, i;

        r = x.real - y.real;
        i = x.imaginary - y.imaginary;

        return complexNumber(r, i);
    }

//   friend complexNumber operator*(complexNumber& x,
//                                  const complexNumber& y);
//    Precondition: NONE
//    Postcondition: Returns the product of two complex numbers.
    complexNumber operator*(const complexNumber& x, const complexNumber& y)
    {
        double r, i;

        r = (x.real * y.real) - (x.imaginary * y.imaginary);
        i = (x.real * y.imaginary) + (x.imaginary * y.real);

        return complexNumber(r, i);
    }

    complexNumber operator*(const complexNumber& x, int y)
    {
        return complexNumber(x.real*y, x.imaginary*y);
    }

    complexNumber operator*(const complexNumber& x, double y)
    {
        return complexNumber(x.real*y, x.imaginary*y);
    }

//   friend ostream& operator<<(ostream& out, const complexNumber& x);
//    Precondition: NONE
//    Postcondition: Modifies the ostream object by inserting the
//    complex number into out to display in the following form:
//     a + bi
    std::ostream& operator<<(std::ostream& out, const complexNumber& x)
    {
        out << x.real << " + " << x.imaginary << "i";

        return out;
    }
}