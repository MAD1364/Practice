/*
    File: Computer_Programming_Practice_32.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P32
    Due Date: --/--/--

    This program

    Input (keyboard):
    Constants: none
    Output (display):
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main ( )
{
    int dice_roll;

    srand ( time ( NULL ) );
    dice_roll = rand ( ) % 20 + 1;

    cout << "You rolled " << dice_roll << ". ";

    if ( dice_roll == 20 )
        cout << "Critical Hit!" << endl;

    else if ( dice_roll <= 19 && dice_roll >= 12 )
        cout << "Attack Strikes!" << endl;

    else if ( dice_roll < 12 && dice_roll > 5 )
        cout << "Attack Misses." << endl;

    else if ( dice_roll < 5 )
    {
        dice_roll = rand ( ) % 20 + 1;
        cout << "Attack Misses." << endl
             << "Roll 5 or higher to avoid taking damage." << endl << endl
             << "You rolled " << dice_roll << "." << endl << endl;

             {
                 if ( dice_roll < 5 )
                    cout << "Damage Taken." << endl;

                 else if ( dice_roll == 20 )
                    cout << "Critical Retaliation!!!" << endl;

                 else
                    cout << "Damage Avoided!" << endl;
             }
    }

    else
        cout << "Invalid Input. Terminating Program." << endl;

    system ( "PAUSE > NUL" );

    return 0;

}
