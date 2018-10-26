/*
    File: Computer_Programming_Practice_31.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P31
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
    int num1,
        num2;

    srand ( time ( NULL ) );

    num1 = rand ( ) % 3 + 1;

    cout << "Rock, Paper, Scissors!" << endl
         << "1. Rock" << endl
         << "2. Paper" << endl
         << "3. Scissors" << endl;
    cin  >> num2;

    if ( num1 == 1 && num2 == 2 )
        cout << "Paper beats Rock. You win!" << endl;

    else if (  num1 == 2 && num2 == 3 )
        cout << "Scissors beats Paper. You win!" << endl;

    else if ( num1 == 3 && num2 == 1 )
        cout << "Rock beats Scissors. You win!" << endl;

    else if ( num1 == 1 && num2 == 3 )
        cout << "Rock beats Scissors. You lose!" << endl;

    else if ( num1 == 2 && num2 == 1 )
        cout << "Paper beats Rock. You lose!" << endl;

    else if ( num1 == 3 && num2 == 2 )
        cout << "Scissors beats Paper. You lose!" << endl;

    else if ( num1 == num2 )
        cout << "It's a draw!" << endl;

    else if ( num2 > 3 )
        cout << "Invalid Input. Program will Terminate." << endl;


    system ( "PAUSE > NUL" );

    return 0;


}
