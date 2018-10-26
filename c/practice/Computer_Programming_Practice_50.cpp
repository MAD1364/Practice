/*
    File: Computer_Programming_Practice_50.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P50
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
    const int student_data = 3;

    int student_id;

    double grade1,
           grade2,
           grade3,
           average;

    string student_name;


    ifstream fin;
    fin.open ("student_data.txt");

    if ( !fin )
    {
        cout << "Input file failed to open. ***Program Terminating.***" << endl;

        return -1;
    }

    ofstream fout;
    fout.open ("student_averages.txt");

    if ( !fout )
    {
        cout << "Output file failed to open. ***Program Terminating.***" << endl;

        return -2;
    }

    fout << "SID  NAME      AVERAGE" << endl;

    for ( int i = 0; i < student_data; i++ )
    {
        fin  >> student_id >> student_name >> grade1 >> grade2 >> grade3;
        average = ( grade1 + grade2 + grade3 ) / 3;
        fout << fixed << left << setprecision(4)
             << setw(5) << student_id << setw(10) << student_name << setw(10) << average << endl;
    }


    cout << "Student data has been recorded to student_averages.txt" << endl;

    fin.close ( );
    fout.close ( );

    system ("PAUSE > NUL");

    return 0;
}
