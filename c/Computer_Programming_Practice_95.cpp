/*
    File: Computer_Programming_Practice_95.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P95
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
    const double PI = 3.145912;
    double radius,
           side,
           circumference,
           perimeter,
           area;

    int choice;

    cout << "Welcome to the shape Calculator!" << endl;
    cout << "Choose a shape to begin:" << endl
         << "1. Circle" << endl
         << "2. Square" << endl;
    cin  >> choice;

    switch ( choice )
    {
        case 1:
            cout << "You chose the circle. What is the radius of your circle: ";
            cin  >> radius;

            cout << "Which property would you like to evaluate?" << endl
                 << "1. Circumference" << endl
                 << "2. Area" << endl;
            cin  >> choice;

            switch ( choice )
            {
                case 1:
                    circumference = 2 * PI * radius;
                    cout << "The circumference of your circle is " << circumference << endl;
                    break;

                case 2:
                    area = PI * radius * radius;
                    cout << "The area of your circle is " << area << endl;
                    break;
            }
            break;

        case 2:
            cout << "You chose the square. What is the length of the sides of your square: ";
            cin  >> side;

            cout << "Which property would you like to evaluate?" << endl
                 << "1. Perimeter" << endl
                 << "2. Area" << endl;
            cin  >> choice;

            switch ( choice )
            {
                case 1:
                    perimeter = 4 * side;
                    cout << "The perimeter of your square is " << perimeter << endl;
                    break;

                case 2:
                    area = side * side;
                    cout << "The area of your square is " << area << endl;
                    break;
            }
            break;
    }

    system ("PAUSE > NUL");

    return 0;
}
