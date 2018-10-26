#include <iostream>
#include "BUSINESS_TRIP.h"

using namespace std;

float roundTripAirFare()
{
    float amount = 0.0;

    cout << "Enter the amount of round-trip airfare: ";
    cin >> amount;

    while ( amount < 0 )
    {
        cout << "Enter a valid amount: ";
        cin >> amount;
    }

    return amount;
}