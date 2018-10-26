/*
    File: Computer_Programming_Practice_82.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P82
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
    const double PI = 3.14152;

    double radius,
           side,
           area,
           circumference,
           perimeter;

    int choice;

    cout << "Welcome to the Shape Calculator!" << endl
         << "Pick a shape to begin" << endl
         << "1. Circle" << endl
         << "2. Square" << endl;
    cin  >> choice;

    switch ( choice )
    {
        case 1:
            cout << endl
                 << "You chose the Circle." << endl
                 << "What is the radius of your circle: ";
            cin  >> radius;

            cout << endl
                 << "Choose a property to evaluate" << endl
                 << "1. Area" << endl
                 << "2. Circumference" << endl;
            cin  >> choice;

            switch ( choice )
            {
                case 1:
                    area = PI * radius * radius;

                    cout << endl
                         << "The area of your circle is " << area << endl;
                    break;

                case 2:
                    circumference = 2 * PI * radius;

                    cout << endl
                         << "The circumference of your circle is " << circumference << endl;
                    break;
            }
            break;

        case 2:
            cout << endl
                 << "You chose the Square." << endl
                 << "What is the length of the side of your square: ";
            cin  >> side;

            cout << endl
                 << "Choose a property to evaluate" << endl
                 << "1. Area" << endl
                 << "2. Perimeter" << endl;
            cin  >> choice;

            switch ( choice )
            {
                case 1:
                    area = side * side;

                    cout << endl
                         << "The area of your square is " << area << endl;
                    break;

                case 2:
                    perimeter = 4 * side;

                    cout << endl
                         << "The perimeter of your square is " << perimeter << endl;
                    break;
            }
            break;
    }

    system ("PAUSE > NUL");

    return 0;
}
