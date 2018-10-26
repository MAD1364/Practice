/*
    File: Computer_Programming_Practice_46.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P46
    --/--/--

    This program

    Input:
    Constants:
    Output:
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ( )
{
    int user_money = 1000,
        bet,
        user_roll,
        computer_roll;

    char choice;

    srand ( time (NULL) );


    cout << "Gambling is addicting..." << endl << endl;


    do
    {
        user_roll = rand ( ) % 6 + 1;

        computer_roll = rand ( ) % 6 + 1;

        cout << "You have $" << user_money << "." << endl
             << "How much would you like to bet? ";
        cin  >> bet;
        while ( bet > user_money || bet <= 0 )
        {
            cout << endl << endl << "ERROR: Insufficient Funds." << endl
                 << "Enter the amount you would like to bet: ";
            cin  >> bet;
        }

        cout << endl << "You rolled " << user_roll << endl
             << "Your opponent rolled " << computer_roll << endl;


        if ( computer_roll > user_roll || computer_roll == user_roll )
        {
            cout << endl << "You lose $" << bet << endl;

            user_money = user_money - bet;
        }

        else
        {
            cout << endl << "You win $" << bet << endl;

            user_money = user_money + bet;
        }

        if ( user_money == 0 )
        {
            cout << endl << "You have no more money left to play." << endl
                 << "Please try again next time." << endl;
        }

        else
        {
            cout << endl << "Would you like to try again? (Y or N): ";
            cin  >> choice;

            cout << endl;
        }

    }
    while ( choice == 'Y' || choice == 'y' );

    cout << endl << "You have $" << user_money << "." << endl;

    system ("PAUSE > NUL");

    return 0;

}
