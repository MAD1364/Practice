/*
    File: Computer_Programming_Practice_48.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P48
    --/--/--

    This program

    Input:
    Constants:
    Output:
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main ( )
{
    int bet,
        user_roll,
        computer_roll,
        user_money = 1000;

    char choice;

    srand ( time(NULL) );

    cout << "Let's play dice!" << endl;

    do
    {
        user_roll = rand( ) % 6 + 1;
        computer_roll = rand( ) % 6 + 1;

        cout << endl << "You have $" << user_money << endl
             << "How much would you like to bet?: ";
        cin  >> bet;

        while ( bet > user_money || bet <= 0 )
        {
            cout << endl << "ERROR: Invalid input." << endl
                 << "Enter the amount you would like to bet: ";
            cin  >> bet;
        }

        cout << endl << "You rolled " << user_roll << endl
                     << "Your opponent rolled " << computer_roll << endl;

        if ( computer_roll >= user_roll )
        {
            cout << endl << "You lose $" << bet;

            user_money = user_money - bet;
        }

        else
        {
            cout << endl << "You win $" << bet;

            user_money = user_money + bet;
        }


        if ( user_money == 0 )
        {
            cout << endl << "You are out of funds. Please try again next time!" << endl;
        }

        else
        {
            cout << endl << "Would you like to continue? (Y or N): ";
            cin  >> choice;
        }

    }

    while ( (choice == 'Y' || choice == 'y') && user_money != 0 );

    cout << endl << "You have $" << user_money << endl;

    system("PAUSE > NUL");

    return 0;
}
