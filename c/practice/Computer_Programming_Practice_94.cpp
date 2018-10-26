/*
    File: Computer_Programming_Practice_94.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P94
    --/--/--

    This program

    Input:
    Constants:
    Output:
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int calculatePerimeter ( int width, int height );

int calculateArea( int width, int height );

void printRectangle ( int width, int height, char symbol );

bool isSideValid ( int side );

int main ( )
{
    int width,
        height;

    char symbol,
         choice;

    do
    {
        cout << "Please enter the following" << endl
             << "Width: ";
        cin  >> width;
        while ( isSideValid ( width ) )
        {
            cout << "ERROR: Width must be between 1 and 40." << endl
                 << "Enter the width: ";
            cin  >> width;
        }

        cout << "Height: ";
        cin  >> height;
        while ( isSideValid ( height ) )
        {
            cout << "ERROR: Height must be between 1 and 40." << endl
                 << "Enter the height: ";
            cin  >> height;
        }

        cout << "Desired symbol to use: ";
        cin  >> symbol;

        cout << endl
             << "Perimeter: " << calculatePerimeter ( width, height ) << endl
             << "Area: " << calculateArea ( width, height ) << endl << endl;

        printRectangle ( width, height, symbol );

        cout << endl
             << "Would you like to continue? (Y or N): ";
        cin  >> choice;
    }
    while ( choice == 'Y' || choice == 'y' );

    cout << endl
         << "Come back and make some more rectangles!" << endl;

    system ("PAUSE > NUL");

    return 0;
}

int calculatePerimeter ( int width, int height )
{
    return ( width * height );
}

int calculateArea( int width, int height )
{
    return ( (2 * width) + (2 * height) );
}

void printRectangle ( int width, int height, char symbol )
{
    for ( int i = 0; i < height; i++ )
    {
        for ( int k = 0; k < width; k++ )
        {
            cout << symbol;
        }
        cout << endl;
    }
}

bool isSideValid ( int side )
{
    if ( side > 40 || side < 1 )
    {
        return true;
    }
    else
    {
        return false;
    }
}
