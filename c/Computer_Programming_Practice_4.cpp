/*
    File: Computer_Programming_Practice_4.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Program: P4
    Lab Section: L07
    --/--/--

    This program
        -prints output on the first two lines of the display regarding the
         academic performance of a fictional character, Fred Flintstone.
        -prints on the fourth line of the display, "Hello World", derived from
         strings declared in the program rather than written directly into the
         console output.


    Input: none
    Constants: NAME <Fred Flintstone>
    Output: Fred Flintstone is 38 years old. He has a 1.5 gpa. His letter grade
            is a D.

            Hello World
*/

#include <iostream>

using namespace std;

int main ( )
{
    const string NAME = "Fred Flintstone";

    int age = 38;
    float gpa = 1.5;
    char grade = 'D';
    bool enrolled = 1;

    cout << NAME << " " << "is" << " " << age << " " << "years old"
         << ". He has a" << " " << gpa << " " << "GPA. His letter grade"
         << "is a" << " " << grade << "." << endl << endl;

    string hello = "Hello";
    string world = "World";

    cout << hello << " " << world << endl;

    return 0;

}
