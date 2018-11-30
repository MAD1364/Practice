#include <iostream>
#include "musicalNote.h"

using namespace std;
// include the container the musicalNote specification is in
using namespace mad_2c;

int main()
{
    musicalNote A(0, 1);
    musicalNote def;

    cout << "Compare default and specific construction.\n"
         << "musicalNote A\n"
         << "value: " << A.getValueAsInt() << endl
         << "length: " << A.getLength() << endl
         << "Note: " << A.getNoteValue() << endl << endl
         << "musicalNote def\n"
         << "value: " << def.getValueAsInt() << endl
         << "Length: " << def.getLength() << endl
         << "Note: " << def.getNoteValue() << endl << endl;

    // ternary operator for conditional
    cout << ((A == def) ? "A == def\n\n" : "A != def\n\n");

    cout << "A frequency: " << A.getFrequency() << endl
         << "def frequency: " << def.getFrequency() << endl << endl;

    // demonstrate the modifier functions setValue and setLength
    //A.setValue(-10); // should cause an error
    A.setValue(-9); // set A to middle C
    cout << "A\n"
         << "note: " << A.getNoteValue() << endl
         << "Value: " << A.getValueAsInt() << endl
         << "Length: " << A.getLength() << endl << endl;

    // compare A and def again since they have the same value
    cout << ((A == def) ? "A == def\n\n" : "A != def\n\n");
    // fails due to the notes having different lengths
    // change length of A and compare
    A.setLength(0.25); // automatically demoted given the formal
                       // parameter is float

    cout << ((A == def) ? "A == def\n\n" : "A != def\n\n");

    return 0;
}
