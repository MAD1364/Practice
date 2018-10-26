/*
    File: Computer_Programming_Practice_71.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P71
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
    const double PI = 3.1412;

    double radius,
           side,
           circumference,
           area,
           perimeter;

    int choice;

    cout << "Welcome to the shape calculator!" << endl
         << "Choose a shape to begin." << endl
         << "1. Circle" << endl
         << "2. Square" << endl;
    cin  >> choice;

    switch ( choice )
    {
        case 1:
            cout << endl << "You chose the circle." << endl
                 << "What is the radius of your circle? ";
            cin  >> radius;

            cout << endl << "What property would you like to evaluate?" << endl
                 << "1. Area" << endl
                 << "2. Circumference" << endl;
            cin  >> choice;

            switch ( choice )
            {
                case 1:
                    area = PI * radius * radius;

                    cout << endl << "The area of your circle is " << area << endl;
                    break;

                case 2:
                    circumference = PI * 2 * radius;

                    cout << endl << "The circumference of your circle is " << circumference << endl;
                    break;
            }
            break;

        case 2:
            cout << endl << "You chose the square." << endl
                 << "What is the length of the sides of your square? ";
            cin  >> side;

            cout << endl << "What property would you like to evaluate?" << endl
                 << "1. Area" << endl
                 << "2. Perimeter" << endl;
            cin  >> choice;

            switch ( choice )
            {
                case 1:
                    area = side * side;

                    cout << endl << "The area of you square is " << area << endl;
                    break;

                case 2:
                    perimeter = 4 * side;

                    cout << endl << "The perimeter of your square is " << perimeter << endl;
                    break;
            }
            break;
    }

    system ("PAUSE > NUL");

    return 0;
}
