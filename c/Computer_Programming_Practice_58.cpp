/*
    File: Computer_Programming_Practice_58.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P58
    --/--/--

    This program

    Input:
    Constants:
    Output:
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main ( )
{
    const int SIZE = 7;

    const string WEEKDAY[SIZE] = {"Sunday", "Monday", "Tuesday", "Wednesday",
                                 "Thursday", "Friday", "Saturday"};

    double distances[SIZE],
           farthest = 0,
           shortest = 1000,
           total = 0,
           average;

    int index1,
        index2;


    cout << "Please enter the distance you ran on..." << endl << endl;

    for ( int i = 0; i < SIZE; i++ )
    {
        cout << fixed << left << setw(11) << WEEKDAY[i] << ": ";
        cin  >> distances[i];
    }

    for ( int j = 0; j < SIZE; j++ )
    {
        total = total + distances[j];
    }

    average = total / 7;

    cout << endl << setprecision(2) << "Total Distance    : " << total << endl
         << "Average Distance  : " << average << endl;


    for ( int k = 0; k < SIZE; k++ )
    {
        if ( distances[k] > farthest )
        {
            farthest = distances[k];
            index1 = k;
        }
    }

    for ( int m = 0; m < SIZE; m++ )
    {
        if ( distances[m] < shortest )
        {
            shortest = distances[m];
            index2 = m;
        }
    }

    cout << "Farthest distance run: " << farthest << " mile(s) on " << WEEKDAY[index1] << endl
         << "Shortest distance run: " << shortest << " mile(s) on " << WEEKDAY[index2] << endl;


    system ("PAUSE > NUL");

    return 0;
}
