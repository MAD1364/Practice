// Filename: stats.cpp
// Documentation for the functions herein can be found in the
// corresponding specification file stats.h
//
// Remember to store the implementations within the same container
// or namespace as the corresponding specification is found in

#include "stats.h" // include specification file
#include <cassert> // for assert function for debugging

namespace main_savitch_2C
{
// CONSTRUCTOR for the statistician class:
//   statistician( );
//     Postcondition: The object has been initialized, and is ready to accept
//     a sequence of numbers. Various statistics will be calculated about the
//     sequence.
    statistician::statistician(): count(0), total(0) {}

// PUBLIC MODIFICATION member functions for the statistician class:
//   void next(double r)
//     The number r has been given to the statistician as the next number in
//     its sequence of numbers.
    void statistician::next(double r)
    {
        count++;
        total += r;

        if (count == 1)
            tiniest = largest = r;
        else // count > 1
        {
            if (r < tiniest) tiniest = r;
            if (r > largest) largest = r;
        }
    }

//   void reset( );
//     Postcondition: The statistician has been cleared, as if no numbers had
//     yet been given to it.
    void statistician::reset()
    {
        count = total = 0;
    }

// PUBLIC CONSTANT member functions for the statistician class:
//   int length( ) const
//     Postcondition: The return value is the length of the sequence that has
//     been given to the statistician (i.e., the number of times that the
//     next(r) function has been activated).
//   defined inline as it requires a single return of count

//   double sum( ) const
//     Postcondition: The return value is the sum of all the numbers in the
//     statistician's sequence.
//   defined inline because sum is initialized to zero by constructor

//   double mean( ) const
//     Precondition: length( ) > 0
//     Postcondition: The return value is the arithmetic mean (i.e., the
//     average of all the numbers in the statistician's sequence).
    double statistician::mean() const
    {
        // check statistician has been given at least one number
        assert(length() > 0);

        return total / count;
    }

//   double minimum( ) const
//     Precondition: length( ) > 0
//     Postcondition: The return value is the tinyest number in the
//     statistician's sequence.
    double statistician::minimum() const
    {
        // if statistician has no numbers, there is no minimum
        assert (length() > 0)

        return tiniest;
    }

//   double maximum( ) const
//     Precondition: length( ) > 0
//     Postcondition: The return value is the largest number in the
//     statistician's sequence.
    double statistician::maximum() const
    {
        // if statistician has no numbers, there is no maximum
        assert(length() > 0)

        return largest;
    }

// NON-MEMBER functions for the statistician class:
//   statistician operator +(const statistician& s1, const statistician& s2)
//     Postcondition: The statistician that is returned contains all the
//     numbers of the sequences of s1 and s2.
    statistician operator +(const statistician& s1, const statistician& s2)
    {
        // this implementation allows for at most one statistician to
        // be empty. If both are empty, the program breaks,
        // actually not needed if the new object is too simply be
        // empty assuming both s1 and s2 are empty
        // assert(s1.count > 0 || s2.count > 0);

        statistician s3; // create new statistician object to return

        s3.total = s1.total + s2.total;
        s3.count = s1.count + s2.count;

        if (s1.count > 0 && s2.count > 0)
        {
            if (s1.tiniest < s2.tiniest) s3.tiniest = s1.minimum;
            else s3.tiniest = s2.minimum;

            if (s1.largest > s2.largest) s3.largest = s1.largest;
            else s3.largest = s2.largest;
        }
        else if (s1.count > 0) // s2.count == 0
        {
            s3.tiniest = s1.tiniest;
            s3.largest = s1.largest;
        }
        else // s2.count > 0 && s2.count == 0
        {
            s3.tiniest = s2.tiniest;
            s3.largest = s2.largest;
        }

        return s3;
    }

//   statistician operator *(double scale, const statistician& s)
//     Postcondition: The statistician that is returned contains the same
//     numbers that s does, but each number has been multiplied by the
//     scale number.
    statistician operator *(double scale, const statistician& s)
    {
        statistician new_s;

        new_s.total = s.total * scale;
        new_s.count = s.count;

        if (s.count != 0)
        {
            if (scale < 0)
            {
                new_s.tiniest = scale * s.largest;
                new_s.largest = scale * s.tiniest;
            }
            else // scale >= 0
            {
                new_s.tiniest = scale * s.tiniest;
                new_s.largest = scale * s.largest;
            }
        }

        return new_s;
    }

//   bool operator ==(const statistician& s1, const statistician& s2)
//     Postcondition: The return value is true if s1 and s2 have the zero
//     length. Also, if the length is greater than zero, then s1 and s2 must
//     have the same length, the same  mean, the same minimum,
//     the same maximum, and the same sum.
    bool operator ==(const statistician& s1, const statistician& s2)
    {
        if (s1.length() == 0 && s2.length() == 0) return true;

        if (s1.length() == s2.length() && s1.sum() == s2.sum() &&
            s1.mean() == s2.mean() && s1.minimum() == s1.minimum() &&
            s1.maximum() == s2.maximum()) return true;

        return false;
    }
}