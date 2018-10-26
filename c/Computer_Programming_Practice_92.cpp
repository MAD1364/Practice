/*
    File: Computer_Programming_Practice_92.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P92
    --/--/--

    This program

    Input:
    Constants:
    Output:
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int getArea ( int width, int height );

int getPerimeter ( int width, int height );

void printRectangle ( int width, int height, char symbol );

bool isSizeValid ( int side );

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

        while ( isSizeValid ( width ) )
        {
            cout << "ERROR: Sides must be between 1 and 40." << endl
                 << "Enter the width: ";
            cin  >> width;
        }

        cout << "Height: ";
        cin  >> height;

        while ( isSizeValid ( height) )
        {
            cout << "ERROR: Sides must be between 1 and 40." << endl
                 << "Enter the height: ";
            cin  >> height;
        }

        cout << "Desired symbol for picture of rectangle: ";
        cin  >> symbol;

        cout << endl
             << "Perimeter: " << getPerimeter ( width, height ) << endl
             << "Area:      " << getArea ( width, height ) << endl;
        printRectangle ( width, height, symbol );

        cout << "Would you like to print another picture? (Y or N): ";
        cin  >> choice;
    }
    while ( choice == 'Y' || choice == 'y' );

    cout << endl
         << "Make some more pictures with us next time!" << endl;

    system ("PAUSE > NUL");

    return 0;
}

int getArea ( int width, int height )
{
    return ( width * height );
}

int getPerimeter ( int width, int height )
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

bool isSizeValid ( int side )
{
    if ( side > 40 || side < 1 )
        return true;
    else
        return false;
}
