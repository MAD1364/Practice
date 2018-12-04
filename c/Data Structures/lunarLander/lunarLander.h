#ifndef LUNAR_LANDER_H // if lunar lander has not been compiled,
#define LUNAR_LANDER_H // then compile

// FILE: lunarLander.h
// CLASS PROVIDED: lunarLander
//   A class that simulates a lunar lander used by astronauts to
//   navigate the moon's orbit and land onto the moon's surface
//
// CONSTRUCTOR
//   lunarLander(double fuel_flow_rate = 0.0, double vert_speed = 0.0,
//               double altitude = 1000.0, double fuel_amount = 1700.0
//               double ldr_mass = 1700.0, double max_fuel_cons = 10.0,
//               double max_thrust = 5000.0);
//     Precondition: NONE
//     Postcondition: A lunarLander object is constructed either with
//     client specified values or those provided by the default
//     parameters.
//
// MODIFIER FUNCTIONS
//   void setFuelFlowRate(double new_fuel_flow_rate);
//     Precondition: new_fuel_flow_rate must be a value in the range
//     of 0.0 to 1.0.
//     Postcondition: Sets the fuel_flow_rate of the lunar lander to
//     that provided by the argument, specifically a fraction of the
//     current fuel_flow_rate.
//   void timeStep(double t);
//     Precondition: t > 0. t represents amount of time, in seconds,
//     that elapses from one time step to the next.
//     Postcondition: Changes the values corresponding to
//     fuel_flow_rate, vert_speed, altitude and fuel_amount based on
//     the time t.
//       - fuel_flow_rate: if fuel_flow_rate > 0 && fuel_amount == 0,
//         then reset fuel to zero (there is no fuel to flow).
//       - vert_speed: velocity changes by approximately
//         t x (thrust/total mass - 1.62) m/s.
//           - thrust = fuel_flow_rate x max_thrust
//           - -1.62: downward acceleration due to gravity on the moon.
//       - altitude: t x velocity
//           - velocity is negative
//       - fuel_amount: remaining fuel is reduced by t x r x c
//         kilograms in t seconds.
//           - r: fuel_flow_rate.
//           - c: max_fuel_cons (kg/s)
//       - if altitude drops below zero, reset both altitude and
//         vert_speed (velocity) to 0 (ship has landed)
//       - if fuel_amount < 0, then reset fuel_amount to 0 (no more fuel).
//
// ACCESSOR FUNCTIONS
//   double getFuelFlowRate() const;
//     Precondition: NONE
//     Postcondition: Returns the value of the fuel flow rate variable
//   double getVerticalSpeed() const;
//     Precondition: NONE
//     Postcondition: Returns the value of the vertical speed of the
//     lunar lander.
//   double getAltitude() const;
//     Precondition: NONE
//     Postcondition: Returns the value of the altitude the lunar
//     lander is at.
//   double getFuelAmount() const;
//     Precondition: NONE
//     Postcondition: Returns the amount of fuel in the lunar lander.
//   double getLanderMass() const;
//     Precondition: NONE.
//     Postcondition: Returns the mass of the lunar lander.
//   double getMaxFuelConsumption() const;
//     Precondition: NONE.
//     Postcondition: Returns the maximum fuel consumption rate of the
//     lunar lander.
//   double getMaxThrust() const;
//     Precondition: NONE
//     Postcondition: Returns the maximum thrust the lunar lander can
//     achieve.
//
// NON-MEMBER FUNCTIONS
//   bool operator ==(const lunarLander& L1, const lunarLander& L2);
//     Precondition: NONE
//     Postcondition: Returns true if L1 and L2 have the same
//     fuel_flow_rate, vert_speed, altitude, fuel_amount, ldr_mass,
//     max_fuel_cons and max_thrust.

namespace mad_2c
{
    class lunarLander
    {
    public:
        // Constructor
        lunarLander(double fuel_flow_rate = 0.0, double vert_speed = 0.0,
                    double altitude = 1000.0, double fuel_amount = 1700.0,
                    double ldr_mass = 1700.0, double max_fuel_cons = 10.0,
                    double max_thrust = 5000.0);
        // Modifiers
        void setFuelFlowRate(double new_fuel_flow_rate);
        void timeStep(double t);
        // Accessors
        double getFuelFlowRate() const { return fuel_flow_rate; }
        double getVerticalSpeed() const { return vert_speed; }
        double getAltitude() const { return altitude; }
        double getFuelAmount() const { return fuel_amount; }
        double getLanderMass() const { return ldr_mass; }
        double getMaxFuelConsumption() const { return max_fuel_cons; }
        double getMaxThrust() const { return max_thrust; }

    private:
        double fuel_flow_rate,
               vert_speed,
               altitude,
               fuel_amount,
               ldr_mass,
               max_fuel_cons,
               max_thrust;
    };

    bool operator ==(const lunarLander& L1, const lunarLander& L2);
}

#endif // LUNAR_LANDER_H