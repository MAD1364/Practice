#include <iostream>
#include "BUSINESS_TRIP.h"

using namespace std;

int main()
{
    const float MILE_PRICE = .27,
                PARKING_LIMIT = 6.0,
                TAXI_LIMIT = 10.0,
                HOTEL_LIMIT = 90.0,
                BREAKFAST_LIMIT = 9.0,
                LUNCH_LIMIT = 12.0,
                DINNER_LIMIT = 16.0;

    const int MORNING = 700,
              AFTERNOON = 1200,
              EVENING = 1800;

    int number_of_days = 0,
        time_of_departure = 0,
        time_of_return = 0;

    float round_trip_airfare = 0.0,
          car_rental = 0.0,
          miles = 0.0,
          parking_fees = 0.0,
          taxi_fees = 0.0,
          conference_or_seminar_fees = 0.0,
          hotel_expenses = 0.0,
          meals_eaten = 0.0,
          excess = 0.0,
          allowable = 0.0,
          total_expenses = 0.0;

    number_of_days = tripDays();
    departureReturnTimes( time_of_departure, time_of_return );
    round_trip_airfare = roundTripAirFare();
    car_rental = carRentals();
    miles = milesDriven();
    taxi_fees = taxiFees( number_of_days, TAXI_LIMIT, excess );
    conference_or_seminar_fees = conferenceOrSeminarRegistrationFees();

    allowable = hotelMealsParkingExpenses( number_of_days, hotel_expenses, meals_eaten,
                                          parking_fees, HOTEL_LIMIT, PARKING_LIMIT, TAXI_LIMIT,
                                          BREAKFAST_LIMIT, LUNCH_LIMIT, DINNER_LIMIT, excess );
    allowable = allowable + round_trip_airfare + car_rental + (miles * MILE_PRICE) +
    taxi_fees + conference_or_seminar_fees;

    excess = excess + (miles * MILE_PRICE);

    total_expenses = allowable + excess;

    cout << "Allowable: " << allowable << endl
         << "Excess: " << excess << endl
         << "Total: " << total_expenses << endl;

    return 0;
}