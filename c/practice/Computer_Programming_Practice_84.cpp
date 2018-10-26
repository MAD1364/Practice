/*
    File: Computer_Programming_Practice_84.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P84
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

    cout << "Enter the distance you ran on" << endl;

    for ( int i = 0; i < SIZE; i++ )
    {
        cout << left << setw(11) << WEEKDAY[i] << ": ";
        cin  >> distances[i];

        total = total + distances[i];
    }

    for ( int j = 0; j < SIZE; j++ )
    {
        if ( farthest < distances[j] )
        {
            farthest = distances[j];

            index_farthest = j;
        }
    }

    for ( int k = 0; k < SIZE; k++ )
    {
        if ( shortest > distances[k] )
        {
            shortest = distances[k];

            index_shortest = k;
        }
    }

    average = total / 7;

    cout << endl
         << fixed << setprecision(2)
         << "Total Distance Run:    " << total << " mile(s)" << endl
         << "Average Distance Run:  " << average << " mile(s)" << endl
         << "Farthest Distance Run: " << farthest << " mile(s) on " << WEEKDAY[index_farthest] << endl
         << "Shortest Distance Run: " << shortest << " mile(s) on " << WEEKDAY[index_shortest] << endl;

    system ("PAUSE > NUL");

    return 0;
}
