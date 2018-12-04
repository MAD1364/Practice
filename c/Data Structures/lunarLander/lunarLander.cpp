#include "lunarLander.h"
#include <cassert> // for assert() function for debugging

namespace mad_2c
{
    // CONSTRUCTOR
//   lunarLander(double fuel_flow_rate = 0.0, double vert_speed = 0.0,
//               double altitude = 1000.0, double fuel_amount = 1700.0
//               double ldr_mass = 1700.0, double max_fuel_cons = 10.0,
//               double max_thrust = 5000.0);
//     Precondition: NONE
//     Postcondition: A lunarLander object is constructed either with
//     client specified values or those provided by the default
//     parameters.
    lunarLander::lunarLander(double new_fuel_flow_rate, double new_vert_speed,
                             double new_altitude, double new_fuel_amount,
                             double new_ldr_mass, double new_max_fuel_cons,
                             double new_max_thrust)
    {
        fuel_flow_rate = new_fuel_flow_rate;
        vert_speed = new_vert_speed;
        altitude = new_altitude;
        fuel_amount = new_fuel_amount;
        ldr_mass = new_ldr_mass;
        max_fuel_cons = new_max_fuel_cons;
        max_thrust = new_max_thrust;
    }

// MODIFIER FUNCTIONS
//   void setFuelFlowRate(double new_fuel_flow_rate);
//     Precondition: new_fuel_flow_rate must be a value in the range
//     of 0.0 to 1.0.
//     Postcondition: Sets the fuel_flow_rate of the lunar lander to
//     that provided by the argument, specifically a fraction of the
//     current fuel_flow_rate.
    void lunarLander::setFuelFlowRate(double new_fuel_flow_rate)
    {
        assert(new_fuel_flow_rate >= 0.0 && new_fuel_flow_rate <= 1.0);

        fuel_flow_rate = new_fuel_flow_rate;
    }

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
    void lunarLander::timeStep(double t)
    {
        assert(t > 0); // check that time that has elapsed is not negative

        if (fuel_flow_rate > 0 && fuel_amount == 0) fuel_flow_rate = 0.0;

        vert_speed = t * (((fuel_flow_rate * max_thrust)/
                          ldr_mass) - 1.62);

        altitude += t * vert_speed;

        if (altitude < 0) {altitude = 0; vert_speed = 0;}
        fuel_amount -= (t * fuel_flow_rate * max_fuel_cons);

        if (fuel_amount < 0) fuel_amount = 0.0;
    }

// NON-MEMBER FUNCTIONS
//   bool operator ==(const lunarLander& L1, const lunarLander& L2);
//     Precondition: NONE
//     Postcondition: Returns true if L1 and L2 have the same
//     fuel_flow_rate, vert_speed, altitude, fuel_amount, ldr_mass,
//     max_fuel_cons and max_thrust.
    bool operator ==(const lunarLander& L1, const lunarLander& L2)
    {
        return (L1.getFuelFlowRate() == L2.getFuelFlowRate() &&
                L1.getVerticalSpeed() == L2. getVerticalSpeed() &&
                L1.getAltitude() == L2.getAltitude() &&
                L1.getFuelAmount() == L2.getFuelAmount() &&
                L1.getLanderMass() == L2.getLanderMass() &&
                L1.getMaxFuelConsumption() == L2.getMaxFuelConsumption() &&
                L1.getMaxThrust() == L2.getMaxThrust());
    }
}