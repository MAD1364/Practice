/*
    File: Computer_Programming_Practice_5.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Program: P5
    Lab Section: L07
    --/--/--

    This program
        -prints the student's full name on the 1st line of output
         e.g. Mario Delagarza
        -prints 'C.S.1428.?' (without the quotation marks) on the 2nd line of
         output with the student's lecture section number in place of the
         questions mark
        -prints 'Lab Section: L?' (without quotation marks) on the 3rd line of
         output with the student's lab section number in place of the question
         mark
        -prints this program's due dater on the fourth line of output
        -leaves line five blank
        -prints 'Major: <student's major>' (without quotation marks)
         on the 6th line of output with the student's major in place of
         <student's major>
        -prints 'Minor: < student's minor or specialization>' (without quotation
         marks)on the 7th line of output with the student's minor or
         specialiation in place of <student's minor or specialization>
         Note: the keyword 'Minor:' might be replaced with the keyword
         'Specialization:' or 'Concentration:' depending on the student
        -prints 'Favorite Beverage: <student's favorite beverage>'
         (without quotation marks) on the 8th line of output with the student's
         favorite beverage in place of <student's favorite beverage>

    Input: none
    Constants: none
    Output:

            Mario Delagarza
            C.S.1428.?
            Lab Section: L0?
            --/--/--

            Major: ?
            Minor: ?
            Favorite Beverage: ?

*/

#include <iostream>

using namespace std;

int main ( )
{
    cout << "Mario Delagarza" << endl
         << "C.S.1428.001" << endl
         << "Lab Section: L07" << endl
         << "09/10/16" << endl << endl;

    cout << "Major: Computer Science" << endl
         << "Minor: No minor declared" << endl
         << "Favorite Beverage: Psychedelic Frog" << endl;

    return 0;

}
