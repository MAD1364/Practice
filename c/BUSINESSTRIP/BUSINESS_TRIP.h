#ifndef BUSINESS_TRIP_H
#define BUSINESS_TRIP_H

using namespace std;

int tripDays();
void departureReturnTimes( int &time_of_departure, int &time_of_return );
float roundTripAirFare();
float carRentals();
float milesDriven();
float taxiFees( int number_of_days, int TAXI_FEES, float &excess );
float conferenceOrSeminarRegistrationFees();
float hotelMealsParkingExpenses( int number_of_days, float & hotel_expenses,
                                 float &meals_eaten, float &parking_fees,
                                 float hotel_limit, float parking_limit,
                                 float taxi_limit, float breakfast, float lunch,
                                 float dinner, float &excess );

#endif