/*
    File: Computer_Programming_Practice_3.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Program: P3
    Lab Section: L07
    --/--/--

    This program
        - prints output on the first two lines of the display regarding the
          author's birthdate.

*/

#include <iostream>

using namespace std;

int main ( )
{
    int birthDay = 26;
    int birthYear = 1990;

    string birthMonth = "August";

    cout << "I was born on" << " " << birthMonth << " " << birthDay << "," <<
         " " << birthYear << "." << endl;

    return 0;

}
