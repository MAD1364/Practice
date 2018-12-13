#include "date.h"
#include <cassert> // for debugging functions such as assert()
#include <iostream>

namespace mad_2c
{
// CONSTRUCTOR
//   date(int month = 01, int day = 01, int year = 2000);
//     Precondition: If arguments provided to the constructor are
//     invalid in terms of the configuration of values given to
//     represent a date, an error will occur.
//     Postcondition: Sets the month, day and year member variables
//     of the date object.
    date::date(int init_month, int init_day, int init_year)
    {
        //assert(init_month > 0 && init_day > 0 && init_year > 0);

        //std::cout << init_month << " " << init_day << " " << init_year
          //        << std::endl;

        month = init_month;
        day = init_day;
        year = init_year;

        validateMonth(init_month);
        validateDay(init_day);
        validateYear(init_year);
    }

// MODIFICATION FUNCTIONS
//   void nextDay();
//     Precondition: NONE
//     Postcondition: Increments the day by one to the next day.
    void date::nextDay()
    {
        if ((month < 8 && month % 2 == 1) ||
            (month >= 8 && month % 2 == 0))
        {
            if (day < 31) day++;
            else
            {
                if (month < 12) {month++; day = 1;}
                else {month = 1; day = 1; year++;}
            }
        }
        else if (month == 2)
        {
            if (day == 28) {month++; day = 1;}
        }
        else
            if (day == 30) {month++; day = 1;}
    }

// ACCESSOR FUNCTIONS
//   void validateMonth(int& month);
//     Precondition: NONE
//     Postcondition: Ensures the input the client provides is valid.
    void date::validateMonth(int& new_month) const
    {
        while (new_month < 1 || new_month > 12)
        {
            std::cout << "Please enter a value in the range [1, 12]: ";
            std::cin >> new_month;
        }
    }

//   void validateDay(int& day);
//     Precondition: NONE
//     Postcondition: Ensures the input the client provides is valid.
    void date::validateDay(int& new_day) const
    {
        if ((month < 8 && (month % 2 == 1)) ||
            (month >= 8 && (month % 2 == 0)))
        {
            while (new_day < 1 || new_day > 31)
            {
                std::cout << "Please enter an integer in the range [1, 31]: ";
                std::cin >> new_day;
            }
        }
        else if (month == 2)
        {
            while (new_day < 1 || new_day > 28)
            {
                std::cout << "Please enter an integer in the range [1, 28]: ";
                std::cin >> new_day;
            }
        }
        else if ((month < 8 && month % 2 == 0) ||
                 (month > 8 && month % 2 == 1))
        {
            while (new_day < 1 || new_day > 30)
            {
                std::cout << "Please enter an integer in the range [1, 30]: ";
                std::cin >> new_day;
            }
        }
    }

//   void validateYear(int& year);
//     Precondition: NONE
//     Postcondition: Ensures the input the client provides is valid.
    void date::validateYear(int& new_year) const
    {
        while (new_year < 0)
        {
            std::cout << "Please enter a non-negative integer: ";
            std::cin >> new_year;
        }
    }

// NON-MEMBER FUNCTIONS
//   friend void displayDate()
//     Precondition: NONE
//     Postcondition: Displays the date in word format:
//     Month, DD YYYY
    void displayDate(const date& d1)
    {
        switch(d1.month)
        {
            case 1: std::cout << "January, "; break;
            case 2: std::cout << "February, "; break;
            case 3: std::cout << "March, "; break;
            case 4: std::cout << "April, "; break;
            case 5: std::cout << "May, "; break;
            case 6: std::cout << "June, "; break;
            case 7: std::cout << "July, "; break;
            case 8: std::cout << "August, "; break;
            case 9: std::cout << "September, "; break;
            case 10: std::cout << "October, "; break;
            case 11: std::cout << "November, "; break;
            case 12: std::cout << "December, ";
        }

        std::cout << d1.day << " " <<d1. year << std::endl;
    }

//   friend ostream& operator<<(ostream& out, const date& d1);
//     Precondition: NONE
//     Postcondition: Displays the date in numerically: MM/DD/YYYY.
    std::ostream& operator<<(std::ostream& out, const date& d1)
    {
        out << d1.month << "/" << d1.day << "/" << d1.year;
    }
}