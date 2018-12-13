#ifndef DATE_H
#define DATE_H

// FILE: date.h
// CLASS PROVIDED
//   class represents a date that can be displayed using numbers only
//   or in words based on the appropriate months.
//
// CONSTRUCTOR
//   date(int month = 01, int day = 01, int year = 2000);
//     Precondition: If arguments provided to the constructor are
//     invalid in terms of the configuration of values given to
//     represent a date, an error will occur.
//     Postcondition: Sets the month, day and year member variables
//     of the date object.
//
// MODIFICATION FUNCTIONS
//   void nextDay();
//     Precondition: NONE
//     Postcondition: Increments the day by one to the next day.
//
// ACCESSOR FUNCTIONS
//   void validateMonth(int& month);
//     Precondition: NONE
//     Postcondition: Ensures the input the client provides is valid.
//   void validateDay(int& day);
//     Precondition: NONE
//     Postcondition: Ensures the input the client provides is valid.
//   void validateYear(int& year);
//     Precondition: NONE
//     Postcondition: Ensures the input the client provides is valid.
//
// NON-MEMBER FUNCTIONS
//   friend void displayDate()
//     Precondition: NONE
//     Postcondition: Displays the date in word format:
//     Month, day, year
//   friend ostream& operator<<(ostream& out, const date& d1);
//     Precondition: NONE
//     Postcondition: Displays the date in numerically: MM/DD/YYYY.

#include <iostream>

namespace mad_2c
{
    class date
    {
    public:
        // Constructor
        date(int init_month = 1, int init_day = 1, int init_year = 2000);
        // Modifiers
        void nextDay();
        // Accessors
        void validateMonth(int&) const;
        void validateDay(int&) const;
        void validateYear(int&) const;
        // Friends (have access to private variables)
        friend void displayDate(const date&);
        friend std::ostream& operator<<(std::ostream&, const date&);

    private:
        int month, day, year;
    };
}
#endif // DATE_H