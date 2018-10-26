#include <iostream>
#include "BUSINESS_TRIP.h"

using namespace std;

float hotelMealsParkingExpenses( int number_of_days, float &hotel_expenses,
                                 float &meals_eaten, float &parking_fees,
                                 float hotel_limit, float parking_limit,
                                 float taxi_limit, float breakfast, float lunch,
                                 float dinner, float &excess )
{
    float total = 0.0;

    cout << "Enter the following daily expenses: \n"
         << "1. Food\n" << endl
         << "2. Parking\n" << endl
         << "3. Lodging\n" << endl;

    for ( int i = 0; i < number_of_days; i++ )
    {
        cout << "Day " << i+1 << endl
             << "1: ";
        cin >> meals_eaten;

        while ( meals_eaten < 0 )
        {
            cout << "Enter a valid amount: ";
            cin >> meals_eaten;
        }

        if ( meals_eaten > breakfast + lunch + dinner )
        {
            excess = excess + meals_eaten - ( breakfast + lunch + dinner );

            total = total + breakfast + lunch + dinner;
        }
        else
            total = total + meals_eaten;

        cout << "2: ";
        cin >> parking_fees;

        while ( parking_fees < 0 )
        {
            cout << "Enter a valid amount: ";
            cin >> parking_fees;
        }

        if ( parking_fees > parking_limit )
        {
            excess = excess + parking_fees - parking_limit;
            total = total + parking_limit;
        }
        else
            total = total + parking_fees;

        cout << "3: ";
        cin >> hotel_expenses;

        while ( hotel_expenses < 0 )
        {
            cout << "Enter a valid amount: ";
            cin >> hotel_expenses;
        }

        if ( hotel_expenses > hotel_limit )
        {
            excess = excess + hotel_expenses - hotel_limit;
            total = total + hotel_limit;
        }
        else
            total = total + hotel_expenses;
    }

    return total;
}