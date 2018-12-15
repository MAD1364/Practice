#ifndef COMPLEX_NUMBERS_H
#define COMPLEX_NUMBERS_H

// FILE: complexNumbers.h
// CLASS PROVIDED
//   class represents complex numbers that are based on a real and
//   an imaginary part as follows: a + bi where a is the real and b
//   is the imaginary part. i = sqrt(-1).
//
// CONSTRUCTOR
//   complexNumber(double real = 0.0, double imaginary = 0.0);
//    Precondition: NONE
//    Postcondition: Sets the parameter values to the members of the
//    object's variables.
//
// MODIFICATION FUNCTIONS
//
// ACCESSOR FUNCTIONS
//   double getReal() const;
//    Precondition: NONE
//    Postcondition: Returns the real part of the complex number, a.
//   double getImaginary() const;
//    Precondition: NONE
//    Postcondition: Returns the imaginary part of the complex number, b.
//
// NON-MEMBER FUNCTIONS
//   friend bool operator==(const complexNumber& x, const complexNumber& y);
//    Precondition: NONE
//    Postcondition: Returns true if the corresponding parts of the
//    two numbers, x and y, are equal.
//   friend complexNumber& operator +=(complexNumber& x,
//                                     const complexNumber& y);
//    Precondition: NONE
//    Postcondition: Returns the sum of x and y as a sum of the
//    complex numbers' corresponding parts:
//     (a + bi) + (c + di) = (a + c) + (b + d)i
//   friend complexNumber& operator -=(complexNumber& x,
//                                     const complexNumber& y);
//    Precondition: NONE
//    Postcondition: Returns the difference of the complex numbers
//    x and y: (a + bi) - (c + di) = (a - c) + (b - d)i
//   friend complexNumber& operator *=(complexNumber& x,
//                                     const complexNumber& y);
//    Precondition: NONE
//    Postcondition: Returns the product of the complex numbers x and y
//     (a + bi) * (c + di) = ac + adi + bci + (-1)bd = ac - bd + (ad + bc)i
//   friend complexNumber& operator+(complexNumber& x,
//                                   const complexNumber& y);
//    Precondition: NONE
//    Postcondition: Returns the sum of two complex numbers
//   friend complexNumber& operator-(complexNumber& x,
//                                   const complexNumber& y);
//    Precondition: NONE
//    Postcondition: Returns the difference of two complex numbers
//   friend complexNumber& operator*(complexNumber& x,
//                                   const complexNumber& y);
//    Precondition: NONE
//    Postcondition: Returns the product of two complex numbers.
//   friend ostream& operator<<(ostream& out, const complexNumber& x);
//    Precondition: NONE
//    Postcondition: Modifies the ostream object by inserting the
//    complex number into out to display in the following form:
//     a + bi

#include <iostream> // for ostream object identification

namespace mad_2c
{
    class complexNumber
    {
    public:
        // Constructor
        complexNumber(double i_real = 0.0, double i_imaginary = 0.0);
        // Modifiers (none)
        // Accessors
        double getReal() const {return real;}
        double getImaginary() const {return imaginary;}
        // Friend functions (need access to object's member variables)
        friend bool operator==(const complexNumber&, const complexNumber&);
        friend complexNumber& operator+=(complexNumber&, const complexNumber&);
        friend complexNumber& operator-=(complexNumber&, const complexNumber&);
        friend complexNumber& operator*=(complexNumber&, const complexNumber&);
        friend complexNumber& operator*=(complexNumber&, int);
        friend complexNumber& operator*=(complexNumber&, double);
        friend complexNumber operator+(const complexNumber&, const complexNumber&);
        friend complexNumber operator-(const complexNumber&, const complexNumber&);
        friend complexNumber operator*(const complexNumber&, const complexNumber&);
        friend complexNumber operator*(const complexNumber&,int);
        friend complexNumber operator*(const complexNumber&, double);
        friend std::ostream& operator<<(std::ostream&, const complexNumber&);
    private:
        double real, imaginary;
    };
}
#endif // COMPLEX_NUMBERS_H