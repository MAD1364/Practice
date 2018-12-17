#include "fueler.h"
#include <iostream>

namespace mad_2c
{
// CONSTRUCTOR
//   fueler(double i_fuel = 0.0, double i_distance = 0.0);
//    Precondition: i_fuel and i_distance must be non-negative.
//    Postcondition: Sets the fuel and distance member variables of
//    pertaining object to 0.0 by default if no arguments are provided
//    by the client or to those values specified by client-provided
//    arguments.
    fueler::fueler(double i_fuel, double i_distance)
    {
        validateInput(i_fuel);
        validateInput(i_distance);

        fuel = i_fuel;
        distance = i_fuel;
    }

// MODIFICATION FUNCTIONS
//   void resetVehicle();
//    Precondition: NONE
//    Postcondition: Sets the values of the pertaining fueler object
//    to 0.0.
    void fueler::resetVehicle()
    {
        fuel = 0.0;
        distance = 0.0;
    }

//   void travelMiles(double miles);
//    Precondition: miles must be non-negative.
//    Postcondition: Adds to the total distance the vehicle has
//    traveled in terms of miles. Because the vehicle's distance
//    parameter will be based on miles, this function literally adds
//    the new amount traveled unlike the following function which
//    deals in kilometers traveled.
    void fueler::travelMiles(double miles)
    {
        validateInput(miles);

        distance += miles;
    }

//   void travelKilometers(double kilometers);
//    Precondition: kilometers must be non-negative.
//    Postcondition: Converts the value provided in kilometers to
//    miles and adds the distance to the vehicle object's distance
//    member variable.
//      Conversion Factor: 1 kilometer = 0.621371 miles
    void fueler::travelKilometers(double kilometers)
    {
        validateInput(kilometers);

        distance += (kilometers * K_T_M);
    }

//   void consumeGallons(double gallons);
//    Precondition: gallons must be non-negative.
//    Postcondition: Adds an amount of gallons specified by the
//    client provided arguments to the fuel consumed member variable.
    void fueler::consumeGallons(double gallons)
    {
        fuel += gallons;
    }

//   void consumeImperial(double imperial);
//    Precondition: imperial must be non-negative.
//    Postcondition: Adds to the fuel-consumed attribute an amount of
//    gallons equal to the amount of imperial gallons provided.
//      Conversion Factor: 1 Imperial Gallon = 1.20095 Gallons
    void fueler::consumeImperial(double imperial)
    {
        fuel += (imperial * I_T_G);
    }

//   void consumeLiters(double liters);
//    Precondition: liters must be non-negative.
//    Postcondition: Adds to the amount of fuel consumed an amount of
//    gallons equal to the amount of liters provided by the client as
//    an argument.
//      Conversion Factor: 1 Liter = 0.264172 Gallons
    void fueler::consumeLiters(double liters)
    {
        fuel += (liters * L_T_G);
    }

// ACCESSOR FUNCTIONS
//   double fuelMileageUSmpg() const;
//    Precondition: NONE
//    Postcondition: Returns the fuel mileage in miles per gallon
    double fueler::fuelMileageUSmpg() const
    {
        return distance / fuel;
    }

//   double fuelMileageImpg() const;
//    Precondition: NONE
//    Postcondition: Returns the fuel mileage in Imperial miles per
//    gallon.
    double fueler::fuelMileageImpg() const
    {
        return (distance / getImperial());
    }

//   double fuelMileageKml() const;
//    Precondition: NONE
//    Postcondition: Returns the fuel mileage in Kilometers per liter.
    double fueler::fuelMileageKml() const
    {
        return (getKilometers() / getLiters());
    }

//   double fuelMileageL100Km() const;
//    Precondition: NONE
//    Postcondition: Returns the fuel mileage in Liters per
//    100 Kilometers.
    double fueler::fuelMileageL100Km() const
    {
        return (getLiters() / (getKilometers()/100));
    }

// NON-MEMBER FUNCTIONS
//   bool operator==(const fueler& f1, const fueler& f2);
//    Precondition: NONE
//    Postcondition: Returns true if the two fueler objects are
//    equal and equality of two fueler objects is defined as each
//    object having the same values for their fuel-consumed and
//    distance-traveled attributes.
    bool operator==(const fueler& f1, const fueler& f2)
    {
        return (f1.getMiles() == f2.getMiles() &&
                f1.getGallons() == f2.getGallons());
    }

    void validateInput(auto& value)
    {
        while (value < 0)
        {
            std::cout << "Please enter a non-negative value: ";
            std::cin >> value;
        }
    }
}