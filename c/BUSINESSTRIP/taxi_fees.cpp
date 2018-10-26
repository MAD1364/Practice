#include <iostream>
#include "BUSINESS_TRIP.h"

using namespace std;

float taxiFees( int number_of_days, int TAXI_FEES, float &excess )
{
    float taxi_fees = 0.0;

    for ( int i = 0; i < number_of_days; i++ )
    {
        cout << "Enter the total amount of taxi fees for day " << i+1 << ": ";
        cin >> taxi_fees;

        if ( taxi_fees > TAXI_FEES )
            excess = excess + taxi_fees - TAXI_FEES;

        while ( taxi_fees < 0 )
        {
            cout << "Enter a valid amount: ";
            cin >> taxi_fees;
        }
    }

    return TAXI_FEES * number_of_days;
}