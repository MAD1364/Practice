/*
    File: Computer_Programming_Practice_33.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P33
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
    char service,
         sport_package;

    cout << "Below are the service packages available." << endl << endl
         << "Service packages A. and B. can be upgraded with the sports package at the low" << endl
         << "price of $9.99 extra." << endl
         << "A. Basic - $19.99 a month for 50 channels." << endl
         << "B. HD - $29.99 a month for basic and the HD package." << endl
         << "C. Premium - $45.99 a month for basic, and the HD and Sports Package." << endl << endl
         << "Please select the service package you would like. ";
    cin  >> service;

    switch ( service )
    {
        case 'A':
        case 'a':
            cout << endl << "Would you like to upgrage by adding the sports package? (Y/N) ";
            cin  >> sport_package;
            switch ( sport_package )
            {
                case 'Y':
                case 'y':
                    cout << endl << "Your monthly total is $29.98." << endl;
                    break;

                case 'N':
                case 'n':
                    cout << endl << "Your monthly total is $19.99." << endl;
                    break;

                default:
                    cout << endl << "Please make an appropriate selection. Thank you." << endl;
                    break;

                    return -1;
            }

            break;


        case 'B':
        case 'b':
            cout << endl << "Would you like to upgrade by adding the sports package? (Y/N) ";
            cin  >> sport_package;
            switch ( sport_package )
            {
                case 'Y':
                case 'y':
                    cout << endl << "Your monthly total is $39.98." << endl;
                    break;

                case 'N':
                case 'n':
                    cout << endl << "Your monthly total is $29.99." << endl;
                    break;

                default:
                    cout << endl << "Please make and appropriate selection. Thank you." << endl;
                    break;

                    return -2;
            }

            break;

        case 'C':
        case 'c':
            cout << endl << "Your monthly total is $45.99." << endl;
            break;

        default:
            cout << endl << "Please make an appropriate selection. Thank you.";
            break;

            return -3;
    }

    system ( "PAUSE > NUL");

    return 0;

}
