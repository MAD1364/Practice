/*
    File: Computer_Programming_Practice_63.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P63
    --/--/--

    This program

    Input:
    Constants:
    Output:
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main ( )
{
    const int SIZE = 7;

    int score1,
        score2,
        score3;

    double average;

    ifstream fin;
    fin.open ("exam_scores.txt");

    if ( !fin )
    {
        cout << "Failed to open input file. ***Program Terminating.***";

        return -1;
    }

    ofstream fout;
    fout.open ("exam_averages.txt");

    if ( !fout )
    {
        cout << "Failed to open output file. ***Program Terminating.***";

        return -2;
    }

    for ( int i = 0; i < SIZE; i++ )
    {
        fin >> score1 >> score2 >> score3;

        average = ( score1 + score2 + score3 ) / 3;

        fout << average << endl;
    }


    system ("PAUSE > NUL");

    return 0;
}
