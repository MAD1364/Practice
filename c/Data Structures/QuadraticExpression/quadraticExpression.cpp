#include "quadraticExpression.h"
#include <cassert> // for debugging function assert()
#include <cmath> // required for sqrt()

namespace mad_2c
{
// CONSTRUCTOR
//   quadraticExpression(float initA, float initB, float initC);
//     Precondition: NONE
//     Postcondition: Constructs a quadraticExpression object with
//     its coefficients set to the values specified in the formal
//     parameters or to 0 by default.
    quadraticExpression::quadraticExpression(float initA, float initB,
                                             float initC)
    {
        a = initA;
        b = initB;
        c = initC;
    }

// PUBLIC MODIFIER FUNCTIONS
//   void setAllCoefficients(float newA, floatB newB, float newC);
//     Precondition: NONE
//     Postcondition: Sets the coefficients of the quadratic
//     expression to those specified in the formal parameters.
    void quadraticExpression::setAllCoefficients(float newA,
                                                 float newB,
                                                 float newC)
    {
        a = newA;
        b = newB;
        c = newC;
    }

//   void setA(float newA);
//     Precondition: NONE
//     Postcondition: Sets the value of the coefficient a to newA
    void quadraticExpression::setA(float newA)
    {
        a = newA;
    }

//   void setB(float newB);
//     Precondition: NONE
//     Postcondition: Sets the value of the coefficient b to newB
    void quadraticExpression::setB(float newB)
    {
        b = newB;
    }

//   void setC(float newC);
//     Precondition: NONE
//     Postcondition: Sets the value of the coefficient c to newC
    void quadraticExpression::setC(float newC)
    {
        c = newC;
    }

// PUBLIC ACCESSOR FUNCTIONS
//   float evaluateExpAtX(float x) const;
//     Precondition: NONE
//     Postcondition: Returns the value that the expression
//     ax^2 + bx + c evaluates to given the argument x.
    float quadraticExpression::evaluateExpAtX(float x) const
    {
        return a*x*x + b*x + c;
    }

//   int roots() const;
//     Precondition: NONE
//     Postcondition: Returns the number of roots the function has.
//     If the function has infinity roots, return 3.
    int quadraticExpression::roots() const
    {
        if ((a == 0 && b == 0 && c != 0) || (b*b < 4*a*c)) return 0;
        if ((a == 0 && b != 0) || (b*b == 4*a*c && b != 0)) return 1;
        if ((b*b > 4*a*c) || (a != 0 && b == 0 && c != 0)) return 2;
        if (a == 0 && b == 0 && c == 0) return 3;
    }

//   float smallerRoot() const;
//     Precondition: The expression must have at least one real root
//     Postcondition: Returns the smaller of two roots if the
//     expression has two real roots. Otherwise, returns a single root.
    float quadraticExpression::smallerRoot() const
    {
        assert(roots() > 0); // cannot return a real root if non exist

        if (roots() == 1 && b*b == 4*a*c) return (-b/(2.0f*a));
        // if b*b == 4*a*c and there is 1 root, a != 0. Otherwise,
        // if a == 0, then -b/2a is undefined and so there is no
        // real root. Thus, because a root implies that b and c are
        // not 0 but a is, the root is defined as below.
        if (roots() == 1) return (-c/float(b));
        if (roots() == 2) return ((-b - sqrt((b*b - 4*a*c)))/(2.0*a));
    }

//   float largerRoot() const;
//     Precondition: The expression must have at least one real root
//     Postcondition: Returns the larger of two roots if the
//     expression has two real roots.s
    float quadraticExpression::largerRoot() const
    {
        assert(roots() > 0); // at least one real root must exist

        if (roots() == 1 && b*b == 4*a*c) return (-b/(2.0f*a));
        // if b*b == 4*a*c and there is 1 root, a != 0. Otherwise,
        // if a == 0, then -b/2a is undefined and so there is no
        // real root. Thus, because a root implies that b and c are
        // not 0 but a is, the root is defined as below.
        if (roots() == 1) return (-c/float(b));

        return ((-b + sqrt((b*b - 4*a*c)))/(2.0*a));
    }

// NON-MEMBER FUNCTIONS
//   quadraticExpression operator +(const quadraticExpression& q1,
//                                  const quadraticExpression& q2)
//     Precondition: NONE
//     Postcondition: The return value is a quadraticExpression object
//     that represents the sum of the expressions q1 and q2.
    quadraticExpression operator +(const quadraticExpression& q1,
                                    const quadraticExpression& q2)
    {
        return quadraticExpression(q1.getA() + q2.getA(),
                                    q1.getB() + q2.getB(),
                                    q1.getC() + q2.getC());
    }

//   quadraticExpression operator *(double r,
//                                  const quadraticExpression& q);
//     Precondition: NONE
//     Postcondition: Returns a quadraticExpression object that
//     represents the product of the original expression and the
//     constant r.
    quadraticExpression operator *(double r,
                                   const quadraticExpression&q)
    {
        return quadraticExpression(r*q.getA(), r*q.getB(), r*q.getC());
    }
}