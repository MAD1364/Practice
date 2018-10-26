/*
    File: Computer_Programming_Practice_74.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P74
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
           total = 0,
           average,
           farthest = 0,
           shortest = 1000;

    int index_farthest,
        index_shortest;

    cout << "Enter the distances you ran on" << endl
         << fixed << setprecision(2);

    for ( int i = 0; i < SIZE; i++ )
    {
        cout << left << setw(11)
             << WEEKDAY[i] << ": ";
        cin  >> distances[i];
    }

    for ( int j = 0; j < SIZE; j++ )
    {
        total = total + distances[j];
    }

    for ( int k = 0; k < SIZE; k++ )
    {
        if ( farthest < distances[k] )
        {
            farthest = distances[k];

            index_farthest = k;
        }
    }

    for ( int m = 0; m < SIZE; m++ )
    {
        if ( shortest > distances[m] )
        {
            shortest = distances[m];

            index_shortest = m;
        }
    }

    average = total / 7;

    cout << "Total Distance Run   : " << total << " mile(s)" << endl
         << "Average Distance Run : " << average << " mile(s)" << endl
         << "Farthest Distance Run: " << farthest << " mile(s) on " << WEEKDAY[index_farthest] << endl
         << "Shortest Distance Run: " << shortest << " mile(s) on " << WEEKDAY[index_farthest] << endl;

    system ("PAUSE > NUL");

    return 0;
}
