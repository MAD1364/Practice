#include <iostream>
#include "fueler.h"

using namespace std;

using namespace mad_2c;

int main()
{
    fueler f1, f2(100, 100);

    cout << "f1 miles: " << f1.getMiles() << endl
         << "f1 gallons: " << f1.getGallons() << endl
         << "f1 kilometers: " << f1.getKilometers() << endl
         << "f1 Imperial Gallons: " << f1.getImperial() << endl
         << "f1 Liters: " << f1.getLiters() << endl
         << "f1 mpg: " << f1.fuelMileageUSmpg() << endl
         << "f1 Impg: " << f1.fuelMileageImpg() << endl
         << "f1 kml: " << f1.fuelMileageKml() << endl
         << "f1 L100km: " << f1.fuelMileageL100Km() << endl << endl

         << "f2 miles: " << f2.getMiles() << endl
         << "f2 gallons: " << f2.getGallons() << endl
         << "f2 kilometers: " << f2.getKilometers() << endl
         << "f2 Imperial Gallons: " << f2.getImperial() << endl
         << "f2 Liters: " << f2.getLiters() << endl
         << "f2 mpg: " << f2.fuelMileageUSmpg() << endl
         << "f2 Impg: " << f2.fuelMileageImpg() << endl
         << "f2 kml: " << f2.fuelMileageKml() << endl
         << "f2 L100km: " << f2.fuelMileageL100Km() << endl << endl;

    cout << "f1 == f2: " << (f1 == f2) << endl << endl;

    cout << "f1 traveling 100 miles and consuming 100 gallons...\n";

    f1.travelMiles(100);
    f1.consumeGallons(100);

    cout << "f1 miles: " << f1.getMiles() << endl
         << "f1 gallons: " << f1.getGallons() << endl
         << "f1 kilometers: " << f1.getKilometers() << endl
         << "f1 Imperial Gallons: " << f1.getImperial() << endl
         << "f1 Liters: " << f1.getLiters() << endl
         << "f1 mpg: " << f1.fuelMileageUSmpg() << endl
         << "f1 Impg: " << f1.fuelMileageImpg() << endl
         << "f1 kml: " << f1.fuelMileageKml() << endl
         << "f1 L100km: " << f1.fuelMileageL100Km() << endl << endl;

    cout << "f1 == f2: " << (f1 == f2) << endl << endl;

    cout << "f2 traveling Kilometers...\n";

    f2.travelKilometers(100);

    cout << "f2 miles: " << f2.getMiles() << endl
         << "f2 gallons: " << f2.getGallons() << endl
         << "f2 kilometers: " << f2.getKilometers() << endl
         << "f2 Imperial Gallons: " << f2.getImperial() << endl
         << "f2 Liters: " << f2.getLiters() << endl
         << "f2 mpg: " << f2.fuelMileageUSmpg() << endl
         << "f2 Impg: " << f2.fuelMileageImpg() << endl
         << "f2 kml: " << f2.fuelMileageKml() << endl
         << "f2 L100km: " << f2.fuelMileageL100Km() << endl << endl;

    cout << "f1 == f2: " << (f1 == f2) << endl;

    return 0;
}
