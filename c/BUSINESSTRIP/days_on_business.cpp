#include <iostream>
#include "BUSINESS_TRIP.h"

using namespace std;

int tripDays()
{
    int days = 0;

    cout << "Enter the amount of days spent on the trip: ";
    cin >> days;

    while ( days < 1 )
    {
        cout << "Enter a valid amount: ";
        cin >> days;
    }

    return days;
}