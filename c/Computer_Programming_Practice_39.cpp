/*
    File: Computer_Programming_Practice_39.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P39
    --/--/--

    This program

    Input:
    Constants:
    Output:
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main ( )
{
    int number,
        multiple;

    cout << "Please enter a number: ";
    cin  >> number;

    cout << endl << "Specify multiples of a number of your choice: ";
    cin  >> multiple;

    cout << endl << endl;

    if ( number <= 0 || multiple <= 0 )
        cout << endl
             << "ERROR: Please select nonnegative integers.";

    for ( int i = 1; i <= number; i++ )
    {
        if ( i % multiple != 0 )
            cout << " | " << i;

        else
            cout << " | #";
    }

    cout << " |";

    system ("PAUSE > NUL");

    return 0;


}
