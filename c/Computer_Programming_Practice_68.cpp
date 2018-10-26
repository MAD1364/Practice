/*
    File: Computer_Programming_Practice_68.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P68
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


    cout << "Please enter the distances you ran" << endl;

    for ( int i = 0; i < SIZE; i++ )
    {
        cout << fixed << left << setw(11) << WEEKDAY[i] << ": ";
        cin  >> distances[i];
    }

    for ( int j = 0; j < SIZE; j++ )
    {
        total = total + distances[j];

        cout << endl << setprecision(2) << total << " ";
    }
    cout << endl;

    for ( int k = 0; k < SIZE; k++ )
    {
        if ( farthest < distances[k] )
        {
            farthest = distances[k];

            index1 = k;

            cout << endl << setprecision(2) << farthest << " " << distances[k] << " ";
        }
    }
    cout << endl;

    for ( int m = 0; m < SIZE; m++ )
    {
        if ( shortest > distances[m] )
        {
            shortest = distances[m];

            index2 = m;

            cout << endl << setprecision(2) << shortest << " " << distances[m] << " ";
        }
    }
    cout << endl;

    average = total / 7;

    cout << fixed << setprecision(2)
         << endl
         << "Total distance run:    " << total << " mile(s)" << endl
         << "Average distance run:  " << average << " mile(s)" << endl
         << "Farthest distance run: " << farthest << " mile(s) on " << WEEKDAY[index1] << endl
         << "Shortest distance run: " << shortest << " mile(s) on " << WEEKDAY[index2] << endl;

    system ("PAUSE > NUL");

    return 0;
}
