#include "RationalNumbers.h"
#include <iostream> // for ostream and istream in c++ 11.
#include <cassert> // for assert() for debugging
#include <string> // for string variables
#include <cstdlib> // for int atoi(const char* str);

namespace mad_2c
{
// CONSTRUCTOR
//   rationalNumbers(int init_numerator = 0, int init_denominator = 1);
//     Precondition: NONE (if a zero is provided for denominator, default to 1)
//     Postcondition: Sets the numerator and denominator member variables
//     of the object to either the default parameter values or those
//     provided as input through arguments to the invocation of the
//     constructor.
    rationalNumber::rationalNumber(int init_numerator, int init_denominator)
    {
        if (init_denominator == 0) denominator = 1;
        else denominator = init_denominator;

        numerator = init_numerator;

        if ((numerator < 0 && denominator < 0) ||
            (numerator >= 0 && denominator < 0))
        {
            numerator *= -1;
            denominator *= -1;
        }
    }

// MODIFICATION FUNCTIONS
//   rationalNumber& operator +=(const rationalNumber& r);
//     Precondition: NONE
//     Postcondition: returns the operand on the left side of the
//     combined operator after its member variables have been
//     modified according to addition with the corresponding members
//     of the operand on the right side of the combined operator.
    /*rationalNumber& rationalNumber::operator +=(const rationalNumber& r)
    {   // Don't have to worry as denominator is set to 1 by default constructor
        // No arithmetic operation causes the denominator to be set to 0.
        //if (assert(r.getDenominator() != 0))
          //  std::cout << "Denominator cannot be 0.\n";

        if (denominator == r.getDenominator())
            numerator += r.getNumerator();
        else // a/b, c/d  b != d
        {
            numerator = numerator * r.getDenominator() +
                             denominator * r.getNumerator();

            denominator *= r.getDenominator();

            if (numerator == 0) denominator = 1;

            else if (numerator % denominator == 0)
            {
                numerator /= denominator;
                denominator /= denominator;
            }
            else if (denominator % numerator == 0)
            {
                denominator /= numerator;
                numerator /= numerator;
            }
        }
        // Unnecessary as denominator is set to 0 by default parameter specified in constructor
        assert(denominator != 0);

        if ((numerator < 0 && denominator < 0) ||
            (numerator >= 0 && denominator < 0))
        {
            numerator *= -1;
            denominator *= -1;
        }

        return *this;
    }*/

// NON-MEMBER FUNCTIONS
//   friend ostream& operator <<(ostream& out, const rationalNumber& r);
//     Precondition: If the number is negative, the numerator has the sign
//     and the denominator is positive.
//     Postcondition: sends the rationalNumber object in terms of its
//     member variables to the output stream object out. The ostream
//     object out is modified and thus a reference to it is required.
    std::ostream& operator <<(std::ostream& out, const rationalNumber& r)
    {
        out << r.numerator << "/" << r.denominator;

        return out;
    }

//   friend istream& operator >>(istream& in, rationalNumbers& r);
//     Precondition: r be instantiated prior to reading elements
//     into its member variables. Input must be of the following form:
//     "numerator/denominator".
//     Postcondition: Stores the values read from input as the string
//     "numerator/denominator" into the corresponding member variables
//     of the object. The values are normalized so that if both the
//     numerator and denominator are negative, the values are positive,
//     and if the denominator is negative, the sign is attributed to
//     the numerator.
    std::istream& operator >>(std::istream& in, rationalNumber& r)
    {
        std::string input, num = "", den = "";
        int delim = 0,
            length = 0;

        in >> input;

        //input_length = input.size();
        while (input[length] != '\0') length++;
        //std::cout << input[length-1];


        for (int i = 0; i < length; i++)
        {
            if (delim == 0 && input[i] != '/') num += input[i];
            else if (delim != 0 && input[i] != '/') den += input[i];
            else if (input[i] == '/') delim++;
        }
        std::cout << "NUM: " << num << std::endl
                  << "DEN: " << den << std::endl;

        r.numerator = std::atoi(num.c_str());
        r.denominator = std::atoi(den.c_str());

        // denominator cannot be set to zero.
        //assert(r.denominator == 0);

        if (r.numerator % r.denominator == 0)
        {
            r.numerator /= r.denominator;
            r.denominator /= r.denominator;
        }
        else if (r.denominator % r.numerator == 0)
        {
            r.denominator /= r.numerator;
            r.numerator /= r.numerator;
        }

        if ((r.numerator < 0 && r.denominator < 0) ||
            (r.numerator >= 0 && r.denominator < 0))
        {
            r.numerator *= -1;
            r.denominator *= -1;
        }

        if (r.numerator == 0) r.denominator = 1;

        return in;
    }

//   friend rationalNumber& operator +=(rationalNumber& r1, const rationalNumber& r2);
//     Precondition: NONE
//     Postcondition: Returns a reference to r1 after its member
//     variables have been modified by the addition of the corresponding
//     member variables of r2. As a friend, the function is not a
//     member function of the objects so that object itself cannot call
//     this function. Hence the reason for two arguments, the right and
//     left operands of the operator.
    rationalNumber& operator +=(rationalNumber& r1, const rationalNumber& r2)
    {
        // given the rationalNumber objects provided as arguments are
        // instantiated and their denominator is not being set by
        // input, the denominator cannot be 0. There is no need to
        // check for denominator == 0 unless there is an error cause
        // by something other than the logic of the class and its
        // invariant.
        if (r1.denominator == r2.denominator) r1.numerator += r2.numerator;
        else
        {
            r1.numerator = r1.numerator * r2.denominator +
                           r1.denominator * r2.numerator;

            r1.denominator *= r2.denominator;

            if (r1.numerator == 0) r1.denominator = 1;

            if (r1.numerator % r1.denominator == 0)
            {
                r1.numerator /= r1.denominator;
                r1.denominator /= r1.denominator;
            }
            else if (r1.denominator % r1.numerator == 0)
            {
                r1.denominator /= r1.numerator;
                r1.numerator /= r1.numerator;
            }
            else if (r1.numerator % r1.denominator)
            {
                r1.numerator /= r1.denominator;
                r1.denominator /= r1.denominator;
            }
        }

        if ((r1.numerator < 0 && r1.denominator < 0) ||
            (r1.numerator >= 0 && r1.denominator < 0))
        {
            r1.numerator *= -1;
            r1.denominator *= -1;
        }

        return r1;
    }

//   friend rationalNumber& operator -=(rationalNumber& r1, const rationalNumber& r2);
//     Precondition: NONE
//     Postcondition: Returns a reference to the operand on the left
//     side of the operator after the subtraction of the numerator and
//     denominator pertaining to the operand on the right side of the
//     operator.
    rationalNumber& operator -=(rationalNumber& r1, const rationalNumber& r2)
    {
        // the overloaded >> and constructor guarantee that the
        // denominator will not be 0 or negative.
        if (r1.denominator == r2.denominator) r1.numerator += r2.numerator;
        else
        {
            r1.numerator = r1.numerator * r2.denominator -
                           r2.numerator * r1.denominator;

            if (r1.numerator == 0) r1.denominator = 1;

            if (r1.numerator % r1.denominator == 0)
            {
                r1.numerator /= r1.denominator;
                r1.denominator /= r1.denominator;
            }
            else if (r1.denominator % r1.numerator)
            {
                r1.denominator /= r1.numerator;
                r1.numerator /= r1.numerator;
            }
        }

        return r1;
    }
//   friend rationalNumber& operator *=(rationalNumber& r1, const rationalNumber& r2);
//     Precondition: NONE
//     Postcondition: Returns a reference to the operator on the left
//     side of the operator after the multiplication operation occurs.
    rationalNumber& operator *=(rationalNumber& r1, const rationalNumber& r2)
    {
        r1.numerator *= r2.numerator;
        r1.denominator *= r2.denominator;

        if (r1.numerator % r1.denominator == 0)
        {
            r1.numerator /= r1.denominator;
            r1.denominator /= r1.denominator;
        }
        else if (r1.denominator % r1.numerator == 0)
        {
            r1.denominator /= r1.numerator;
            r1.numerator /= r1.numerator;
        }

        return r1;
    }

//   friend rationalNumber& operator /=(rationalNumber& r1, const rationalNumber& r2);
//     Precondition: NONE
//     Postcondition: Returns a reference to the operand on the left
//     side of the operator after the operation of division occurs.
    rationalNumber& operator /=(rationalNumber& r1, const rationalNumber& r2)
    {
        r1.numerator *= r2.denominator;
        r1.denominator *= r2.numerator;

        if (r1.numerator == 0) r1.denominator = 1;
        else if (r1.denominator == 0)
        {
            r1.numerator = 0;
            r1.denominator = 1;
        }

        // Parentheses around sub-expressions are not necessary as
        // the logical and operator && has higher precedence that the
        // logical or || operator.
        if ((r1.numerator < 0 && r1.denominator < 0) ||
            (r1.numerator >= 0 && r1.denominator < 0))
        {
            r1.numerator *= -1;
            r1.denominator *= -1;
        }

        return r1;
    }

//   friend bool operator >(const rationalNumber& r1, const rationalNumber& r2);
//     Precondition: NONE
//     Postcondition: Returns true if r1 > r2.
    bool operator >(const rationalNumber& r1, const rationalNumber& r2)
    {
        if ((r1.numerator > 0 && r2.numerator > 0) ||
            (r1.numerator < 0 && r2.numerator < 0))
            return (r1.numerator * r2.denominator > r2.numerator * r2.numerator);
        else if (r1.numerator <= 0 && r2.numerator > 0) return false;
        else if (r1.numerator >= 0 && r2.numerator < 0) return true;
    }

//   friend bool operator <(const rationalNumber& r1, const rationalNumber& r2);
//     Precondition: NONE
//     Postcondition: Returns true if r1 < r2.
    bool operator <(const rationalNumber& r1, const rationalNumber& r2)
    {
        if ((r1.numerator > 0 && r2.numerator > 0) ||
            (r1.numerator < 0 && r2.numerator < 0))
            return (r1.numerator * r2.denominator < r2.numerator * r1.denominator);
        else if (r1.numerator <= 0 && r2.numerator > 0) return true;
        else if (r1.numerator >= 0 && r2.numerator < 0) return false;
    }

//   friend bool operator >=(const rationalNumber& r1, const rationalNumber& r2);
//     Precondition: NONE
//     Postcondition: Returns true if r1 >= r2.
    bool operator >=(const rationalNumber& r1, const rationalNumber& r2)
    {
        return (r1 > r2) || (r1 == r2);
    }

//   friend bool operator <=(const rationalNumber& r1, const rationalNumber& r2);
//     Precondition: NONE
//     Postcondition: Returns true if r1 <= r2.
    bool operator <=(const rationalNumber& r1, const rationalNumber& r2)
    {
        return (r1 < r2) || (r1 == r2);
    }
//   friend bool operator ==(const rationalNumber& r1, const rationalNumber& r2);
//     Precondition: NONE
//     Postcondition: Returns true if r1 == r2.
    bool operator ==(const rationalNumber& r1, const rationalNumber& r2)
    {
        return (r1.numerator * r2.denominator ==
                r2.numerator & r1.denominator);
    }
}