#include <iostream>
#include "BUSINESS_TRIP.h"

using namespace std;

float milesDriven()
{
    float miles = 0.0;

    cout << "Enter the total miles driven by rental vehicles: ";
    cin >> miles;

    while ( miles < 0 )
    {
        cout << "Enter a valid amount: ";
        cin >> miles;
    }

    return miles;
}