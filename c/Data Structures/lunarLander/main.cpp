#include <iostream>
#include <iomanip> // for formatting functions such as setprecision() and setw()
#include "lunarLander.h"

using namespace std;
// the using namespace statement provides access to all contents of
// the specified namespace or container
using namespace mad_2c;

int main()
{
    lunarLander L1, // default lunarLander object constructed;
                L2(0.7, 780.3, 100000.3, 2300.0, 4000.0, 15.0, 6000),
                Ltest1,
                Ltest2;

    cout << setprecision(2) << fixed << showpoint
         << "L1 specs\n"
         << "Fuel Flow Rate:       " << L1.getFuelFlowRate() << endl
         << "Vertical Speed:       " << L1.getVerticalSpeed() << endl
         << "Altitude:             " << L1.getAltitude() << endl
         << "Fuel Amount:          " << L1.getFuelAmount() << endl
         << "Lander Mass:          " << L1.getLanderMass() << endl
         << "Max Fuel Consumption: " << L1.getMaxFuelConsumption() << endl
         << "Max Thrust:         : " << L1.getMaxThrust() << endl << endl
         << "L2 specs\n"
         << "Fuel Flow Rate:       " << L2.getFuelFlowRate() << endl
         << "Vertical Speed:       " << L2.getVerticalSpeed() << endl
         << "Altitude:             " << L2.getAltitude() << endl
         << "Fuel Amount:          " << L2.getFuelAmount() << endl
         << "Lander Mass:          " << L2.getLanderMass() << endl
         << "Max Fuel Consumption: " << L2.getMaxFuelConsumption() << endl
         << "Max Thrust:         : " << L2.getMaxThrust() << endl << endl;

    cout << "L1 == L2 (specs): " << (L1 == L2) << endl;

    cout << "Ltest1 == Ltest2 (specs): " << (Ltest1 == Ltest2) << endl;

    // modify a single parameter of one of the lunarLanders
    //Ltest2.setFuelFlowRate(-1); // check assertion succeeds
    Ltest2.setFuelFlowRate(0.78);

    cout << "Check Ltest1 == ltest2 after changing fuel flow rate\n"
         << "of one but not the other.\n"
         << "Ltest1 == Ltest2 (specs): " << (Ltest1 == Ltest2) << endl;

    cout << "L1 preparing to land...\n"
         << "L1 in landing sequence. All personal clear landing area\n\n"
         << "Please approve sequence: PRESS ENTER\n";
    cin.get();

    while (L1.getAltitude() != 0)
    {
        L1.timeStep(0.37);

        cout << L1.getAltitude() << " meters\n";
    }

    cout << "L1 has landed.\n"
         << "Prepare for L2 landing...\n"
         << "L2 in landing sequence. All personal clear landing area\n\n"
         << "Please approve sequence: PRESS ENTER\n";
    cin.get(); // wait for user to press enter before proceeding

    while (L2.getAltitude() != 0)
    {
        L2.timeStep(0.37);

        cout << L2.getAltitude() << " meters\n";
    }

    return 0;
}
