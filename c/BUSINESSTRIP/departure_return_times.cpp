#include <iostream>
#include "BUSINESS_TRIP.h"

using namespace std;

void departureReturnTimes( int &time_of_departure, int &time_of_return )
{
    cout << "Enter the time of departure: ";
    cin >> time_of_departure;

    while ( time_of_departure < 0 || time_of_departure > 2400 )
    {
        cout << "Enter a valid time: ";
        cin >> time_of_departure;
    }

    cout << "Enter the time of return: ";
    cin >> time_of_return;

    while ( time_of_return < 0 || time_of_return > 2400 )
    {
        cout << "Enter a valid time: ";
        cin >> time_of_return;
    }
}