/*
    File: Computer_Programming_Practice_60.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P60
    --/--/--

    This program

    Input:
    Constants:
    Output:
*/

#include <iostream>

using namespace std;

int main ( )
{
    //int i = 1;

    /*
    for ( ; i <= 4; i++ )
    {
        cout << "employee " << i << endl;
    }
    */ // this will run despite the variable being initialized outside of the
       // scope of the reprtition construct.

    /*
    for ( int i = 1; i <= 5; )
    {
        cout << "employee " << i << endl;

        i = i + 1;
    }
    */

    /*
    for ( ; ; ) // infinite loop: Output is repeated without end.
    {
        cout << "employee " << i << endl;
    }
    */

    double ball_height;

    int bounce = 0;

    cout << "What is the height of the ball to be dropped from? ";
    cin  >> ball_height;

    while ( ball_height / 2 >= 1 )
    {
        ball_height = ball_height / 2;

        bounce = bounce + 1;

        cout << bounce << " " << ball_height << endl;
    }

    cout << endl << "If the ball's height is half of its height after every "
            "bounce, it will take " << bounce << "  bounces for the ball"
            " to have a height that is greater than or equal to 1." << endl;

    return 0;
}
