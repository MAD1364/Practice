#include <iostream>
#include "BUSINESS_TRIP.h"

using namespace std;

float carRentals()
{
    float rentals = 0.0;

    cout << "Enter the total expenses for car rentals: ";
    cin >> rentals;

    while ( rentals < 0 )
    {
        cout << "Enter a valid amount: ";
        cin >> rentals;
    }

    return rentals;
}