#ifndef RATIONAL_NUMBERS_H // If this has not been compiled
#define RATIONAL_NUMBERS_H // then compile this header file

// FILE: rationalNumbers.h
// CLASS PROVIDED: rationalNumber
//   class that represents rational numbers by storing the numerator
//   and denominator of the rational number that comprise it as
//   member variables
//
// CONSTRUCTOR
//   rationalNumbers(int init_numerator = 0, int init_denominator = 1);
//     Precondition: NONE (if a zero is provided for denominator, default to 1)
//     Postcondition: Sets the numerator and denominator member variables
//     of the object to either the default parameter values or those
//     provided as input through arguments to the invocation of the
//     constructor.
//
// MODIFICATION FUNCTIONS
//   rationalNumber& operator +=(const rationalNumber& r);
//     Precondition: NONE
//     Postcondition: returns the operand on the left side of the
//     combined operator after its member variables have been
//     modified according to addition with the corresponding members
//     of the operand on the right side of the combined operator.
//
// NON-MEMBER FUNCTIONS
//   friend ostream& operator <<(ostream& out, const rationalNumber& r);
//     Precondition: NONE
//     Postcondition: sends the rationalNumber object in terms of its
//     member variables to the output stream object out. The ostream
//     object out is modified and thus a reference to it is required.
//   friend istream& operator >>(istream& in, rationalNumbers& r);
//     Precondition: Must r be instantiated prior to reading elements
//     into its member variables?
//     Postcondition: Stores the values read from input as the string
//     "numerator/denominator" into the corresponding member variables
//     of the object. The values are normalized so that if both the
//     numerator and denominator are negative, the values are positive,
//     and if the denominator is negative, the sign is attributed to
//     the numerator.
//   friend rationalNumber& operator +=(rationalNumber& r1, const rationalNumber& r2);
//     Precondition: NONE
//     Postcondition: Returns a reference to r1 after its member
//     variables have been modified by the addition of the corresponding
//     member variables of r2. As a friend, the function is not a
//     member function of the objects so that object itself cannot call
//     this function. Hence the reason for two arguments, the right and
//     left operands of the operator.
//   friend rationalNumber& operator -=(rationalNumber& r1, const rationalNumber& r2);
//     Precondition: NONE
//     Postcondition: Returns a reference to the operand on the left
//     side of the operator after the subtraction of the numerator and
//     denominator pertaining to the operand on the right side of the
//     operator.
//   friend rationalNumber& operator *=(rationalNumber& r1, const rationalNumber& r2);
//     Precondition: NONE
//     Postcondition: Returns a reference to the operator on the left
//     side of the operator after the multiplication operation occurs.
//   friend rationalNumber& operator /=(rationalNumber& r1, const rationalNumber& r2);
//     Precondition: NONE
//     Postcondition: Returns a reference to the operand on the left
//     side of the operator after the operation of division occurs.
//   friend bool operator >(const rationalNumber& r1, const rationalNumber& r2);
//     Precondition: NONE
//     Postcondition: Returns true if r1 > r2.
//   friend bool operator <(const rationalNumber& r1, const rationalNumber& r2);
//     Precondition: NONE
//     Postcondition: Returns true if r1 < r2.
//   friend bool operator >=(const rationalNumber& r1, const rationalNumber& r2);
//     Precondition: NONE
//     Postcondition: Returns true if r1 >= r2.
//   friend bool operator <=(const rationalNumber& r1, const rationalNumber& r2);
//     Precondition: NONE
//     Postcondition: Returns true if r1 <= r2.
//   friend bool operator ==(const rationalNumber& r1, const rationalNumber& r2);
//     Precondition: NONE
//     Postcondition: Returns true if r1 == r2.

#include <iostream>

namespace mad_2c
{
    class rationalNumber
    {
    public:
        // Constructor
        rationalNumber(int=0, int=1);
        // Modifiers
        //rationalNumber& operator +=(const rationalNumber&);
        // Accessors
        int getNumerator() const { return numerator; }
        int getDenominator() const { return denominator; }
        //Friends
        friend std::ostream& operator <<(std::ostream&, const rationalNumber&);
        friend std::istream& operator >>(std::istream&, rationalNumber&);
        friend rationalNumber& operator +=(rationalNumber&, const rationalNumber&);
        friend rationalNumber& operator -=(rationalNumber&, const rationalNumber&);
        friend rationalNumber& operator *=(rationalNumber&, const rationalNumber&);
        friend rationalNumber& operator /=(rationalNumber&, const rationalNumber&);
        friend bool operator >(const rationalNumber&, const rationalNumber&);
        friend bool operator <(const rationalNumber&, const rationalNumber&);
        friend bool operator >=(const rationalNumber&, const rationalNumber&);
        friend bool operator <=(const rationalNumber&, const rationalNumber&);
        friend bool operator ==(const rationalNumber&, const rationalNumber&);

    private:
        int numerator, denominator;
    };
}
#endif // RATIONAL_NUMBERS_H