#include <iostream>
#include "BUSINESS_TRIP.h"

using namespace std;

float conferenceOrSeminarRegistrationFees()
{
    float fees = 0.0;

    cout << "Enter the total expenses for conference or seminar registration fees: ";
    cin >> fees;

    while ( fees < 0 )
    {
        cout << "Enter a valid amount: ";
        cin >> fees;
    }

    return fees;
}