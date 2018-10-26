/*
   File: Computer_Programming_Practice_19.cpp

   Author: Mario Delagarza
   C.S.1428.001
   Program: P19
   Lab Section: L07
   --/--/--

   This program
       - extracts data from an input file and manipulates it by performing
         calculations using numbers representing test scores for a list of
         students.
       - inserts the results of the calculations in an output file.

    Input (Input file):
            SID     Name      1   2   3
            3474    Vegeta    70  34  89
            1243    Goku      98  77  99
            5746    Piccolo   87  67  97
    Constants: none
    Output (Output file):
            SID     Name      Average
            3474    Vegeta    64.3333
            1243    Goku      91.3333
            5746    Piccolo   83.6667
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>

using namespace std;

int main ( )
{
    int student_id;

    double grade1,
           grade2,
           grade3,
           average;

    string student_name;

    ifstream fin;
    fin.open ("student_data.txt");

    ofstream fout;
    fout.open ("student_averages.txt");

    fin >> student_id >> student_name >> grade1 >> grade2 >> grade3;

    average = ( grade1 + grade2 + grade3 ) / 3 ;

    fout << student_id << student_name << average << endl;

    fin.close ( );
    fout.close ( );

    system ("PAUSE > NUL");

    return 0;

}
