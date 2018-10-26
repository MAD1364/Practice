/*
    File: Computer_Programming_Practice_40.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P40
    --/--/--

    This program

    Input:
    Constants:
    Output:
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main ( )
{
    for ( int i = 0; i < 5; i++ )
    {
        for ( int j = 0; j < 2; j++ )
            cout << "* * * *" << endl
                 << " * * * " << endl;
    }

    cout << "* * * *";

    for ( int l = 0; l < 4; l++ )
        cout << "============";

    for ( int n = 0; n < 5; n++ )
    {
        cout << "++++ " << endl << endl;
    }

    return 0;

}
