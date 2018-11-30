#ifndef QUADRATIC_EXPRESSION_H
#define QUADRATIC_EXPRESSION_H

// FILE: quadraticExpression.h
// CLASS PROVIDED: quadraticExpression
//   class to represent quadratic expressions of the form
//   ax^2 + bx + c
//
// CONSTRUCTOR
//   quadraticExpression(float initA, float initB, float initC);
//     Precondition: NONE
//     Postcondition: Constructs a quadraticExpression object with
//     its coefficients set to the values specified in the formal
//     parameters or to 0 by default.
//
// PUBLIC MODIFIER FUNCTIONS
//   void setAllCoefficients(float newA, floatB newB, float newC);
//     Precondition: NONE
//     Postcondition: Sets the coefficients of the quadratic
//     expression to those specified in the formal parameters.
//   void setA(float newA);
//     Precondition: NONE
//     Postcondition: Sets the value of the coefficient a to newA
//   void setB(float newB);
//     Precondition: NONE
//     Postcondition: Sets the value of the coefficient b to newB
//   void setC(float newC);
//     Precondition: NONE
//     Postcondition: Sets the value of the coefficient c to newC
//
// PUBLIC ACCESSOR FUNCTIONS
//   float getA() const;
//     Precondition: NONE
//     Postcondition: returns the value of a
//   float getB() const;
//     Precondition: NONE
//     Postcondition: Returns the value of b
//   float getC() const;
//     Precondition: NONE
//     Postcondition: Returns the value of c
//   float evaluateExpAtX(float x) const;
//     Precondition: NONE
//     Postcondition: Returns the value that the expression
//     ax^2 + bx + c evaluates to given the argument x.
//   int roots() const;
//     Precondition: NONE
//     Postcondition: Returns the number of roots the function
//   float smallerRoot() const;
//     Precondition: The expression must have at least one real root
//     Postcondition: Returns the smaller of two roots if the
//     expression has two real roots. Otherwise, returns a single root.
//   float largerRoot() const;
//     Precondition: The expression must have at least one real root
//     Postcondition: Returns the larger of two roots if the
//     expression has two real roots.
//
// NON-MEMBER FUNCTIONS
//   quadraticExpression operator +(const quadraticExpression& q1,
//                                  const quadraticExpression& q2)
//     Precondition: NONE
//     Postcondition: The return value is a quadraticExpression object
//     that represents the sum of the expressions q1 and q2.
//   quadraticExpression operator *(double r,
//                                  const quadraticExpression& q);
//     Precondition: NONE
//     Postcondition: Returns a quadraticExpression object that
//     represents the product of the original expression and the
//     constant r.

namespace mad_2c
{
    class quadraticExpression
    {
    public:
        // Constructor
        quadraticExpression(float initA = 0.0f, float initB = 0.0f, float initC = 0.0f);
        // Modifiers
        void setAllCoefficients(float newA, float newB, float newC);
        void setA(float newA);
        void setB(float newB);
        void setC(float newC);
        // Accessors
        float getA() const { return a; }
        float getB() const { return b; }
        float getC() const { return c; }
        float evaluateExpAtX(float x) const;
        int   roots() const;
        float smallerRoot() const;
        float largerRoot() const;

    private:
        float a, b, c;
    };

    // Non-member functions
    quadraticExpression operator +(const quadraticExpression& q1,
                                   const quadraticExpression& q2);
    quadraticExpression operator *(double r,
                                   const quadraticExpression& q);
}
#endif // QUADRATIC_EXPRESSION_H