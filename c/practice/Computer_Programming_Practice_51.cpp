/*
    File: Computer_Programming_Practice_51.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P51
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
    int player_choice,
        computer_choice;

    srand ( time(NULL) );

    player_choice = rand( ) % 3 + 1;
    computer_choice = rand( ) % 3 + 1;


    cout << "Rock, Paper, Scissors!" << endl
         << "1. Rock" << endl
         << "2. Paper" << endl
         << "3. Scissors" << endl;
    cin  >> player_choice;


    cout << endl << "Player's Choice: " << player_choice << endl
         << "Opponent's Choice: " << computer_choice << endl << endl;


    if ( player_choice < 1 || player_choice > 3 )
    {
        cout << "Invalid input. ***Program Terminating.***" << endl;
    }

    else if ( player_choice == computer_choice )
    {
        cout << "It's a draw!" << endl;
    }

    else if ( player_choice == 1 && computer_choice == 2 )
    {
        cout << "You lose! Paper beats rock." << endl;
    }

    else if ( player_choice == 2 && computer_choice == 3 )
    {
        cout << "You lose! Scissors beats paper." << endl;
    }

    else if ( player_choice == 3 && computer_choice == 1 )
    {
        cout << "You lose! Rock beats scissors." << endl;
    }

    else if ( player_choice == 1 && computer_choice == 3 )
    {
        cout << "You win! Rock beats scissors." << endl;
    }

    else if ( player_choice == 2 && computer_choice == 1 )
    {
        cout << "You win! Paper beats Rock." << endl;
    }

    else if ( player_choice == 3 && computer_choice == 2 )
    {
        cout << "You win! Scissors beats paper." << endl;
    }

    system ("PAUSE > NUL");

    return 0;
}
