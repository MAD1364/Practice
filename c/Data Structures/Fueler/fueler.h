#ifndef FUELER_H
#define FUELER_H

// FILE: fueler.h
// CLASS_PROVIDED
//   Class represents a system of a vehicle that keeps track of the
//   fuel consumed and distance traveled by the vehicle.
//
// CONSTRUCTOR
//   fueler(double i_fuel = 0.0, double i_distance = 0.0);
//    Precondition: i_fuel and i_distance must be non-negative.
//    Postcondition: Sets the fuel and distance member variables of
//    pertaining object to 0.0 by default if no arguments are provided
//    by the client or to those values specified by client-provided
//    arguments.
//
// MODIFICATION FUNCTIONS
//   void resetVehicle();
//    Precondition: NONE
//    Postcondition: Sets the values of the pertaining fueler object
//    to 0.0.
//   void travelMiles(double miles);
//    Precondition: miles must be non-negative.
//    Postcondition: Adds to the total distance the vehicle has
//    traveled in terms of miles. Because the vehicle's distance
//    parameter will be based on miles, this function literally adds
//    the new amount traveled unlike the following function which
//    deals in kilometers traveled.
//   void travelKilometers(double kilometers);
//    Precondition: kilometers must be non-negative.
//    Postcondition: Converts the value provided in kilometers to
//    miles and adds the distance to the vehicle object's distance
//    member variable.
//      Conversion Factor: 1 kilometer = 0.621371 miles
//   void consumeGallons(double gallons);
//    Precondition: gallons must be non-negative.
//    Postcondition: Adds an amount of gallons specified by the
//    client provided arguments to the fuel consumed member variable.
//   void consumeImperial(double imperial);
//    Precondition: imperial must be non-negative.
//    Postcondition: Adds to the fuel-consumed attribute an amount of
//    gallons equal to the amount of imperial gallons provided.
//      Conversion Factor: 1 Imperial Gallon = 1.20095 Gallons
//   void consumeLiters(double liters);
//    Precondition: liters must be non-negative.
//    Postcondition: Adds to the amount of fuel consumed an amount of
//    gallons equal to the amount of liters provided by the client as
//    an argument.
//      Conversion Factor: 1 Liter = 0.264172 Gallons
//
// ACCESSOR FUNCTIONS
//   double getMiles() const;
//    Precondition: NONE
//    Postcondition: Returns the distance the vehicle has traveled in
//    miles.
//   double getKilometers() const;
//    Precondition: NONE
//    Postcondition: Returns the distance the vehicle has traveled in
//    kilometers.
//      Conversion Factor 1 Kilometer = 0.621371 miles
//   double getGallons() const;
//    Precondition: NONE
//    Postcondition: Returns the total gallons of fuel the vehicle has
//    consumed in gallons.
//   double getImperial() const;
//    Precondition: NONE
//    Postcondition: Returns the total amount of fuel the vehicle has
//    consumed in Imperial Gallons.
//      Conversion Factor: 1 Imperial Gallon = 1.20095 Gallons
//   double getLiters() const;
//    Precondition: NONE
//    Postcondition: Returns the total amount of fuel the vehicle has
//    consumed in Liters.
//      Conversion Factor: 1 Liter = 0.2614172 Gallons
//   double fuelMileageUSmpg() const;
//    Precondition: NONE
//    Postcondition: Returns the fuel mileage in miles per gallon
//   double fuelMileageImpg() const;
//    Precondition: NONE
//    Postcondition: Returns the fuel mileage in Imperial miles per
//    gallon.
//   double fuelMileageKml() const;
//    Precondition: NONE
//    Postcondition: Returns the fuel mileage in Kilometers per liter.
//   double fuelMileageL100Km() const;
//    Precondition: NONE
//    Postcondition: Returns the fuel mileage in Liters per
//    100 Kilometers.
//
// NON-MEMBER FUNCTIONS
//   bool operator==(const fueler& f1, const fueler& f2);
//    Precondition: NONE
//    Postcondition: Returns true if the two fueler objects are
//    equal and equality of two fueler objects is defined as each
//    object having the same values for their fuel-consumed and
//    distance-traveled attributes.

namespace mad_2c
{
    class fueler
    {
    public:
        // Constructor
        fueler(double i_fuel = 0.0, double i_distance = 0.0);
        // Modifiers
        void resetVehicle();
        void travelMiles(double);
        void travelKilometers(double);
        void consumeGallons(double);
        void consumeImperial(double);
        void consumeLiters(double);
        // Accessors
        double getMiles() const {return distance;}
        double getKilometers() const {return distance / 0.621371;}
        double getGallons() const {return fuel;}
        double getImperial() const {return fuel / 1.20095;}
        double getLiters() const {return fuel / 0.2614172;}
        double fuelMileageUSmpg() const;
        double fuelMileageImpg() const;
        double fuelMileageKml() const;
        double fuelMileageL100Km() const;
    private:
        double fuel, /* in gallons */
               distance; /* in miles */

        const double K_T_M = 0.621371,
                     I_T_G = 1.20095,
                     L_T_G = 0.2614172;
    };

    bool operator==(const fueler&, const fueler&);
    void validateInput(auto&);
}
#endif // FUELER_H