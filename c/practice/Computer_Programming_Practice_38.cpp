/*
    File: Computer_Programming_Practice_38.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P38
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

    int choice_a,
        choice_b,
        radius,
        side;

    double area,
           perimeter,
           circumference;

    cout << "Welcome to the shape calculator!" << endl
         << "Please select a shape to begin." << endl
         << "1. Circle" << endl
         << "2. Square" << endl;

    cin  >> choice_a;

    switch ( choice_a )
    {
        case 1:
            cout << endl << endl << "What property would you like to evaluate?" << endl
                 << "1. Area" << endl
                 << "2. Circumference" << endl;
            cin  >> choice_b;

            cout << endl << "What is the radius of your circle?" << endl;
            cin  >> radius;

            area = PI * radius * radius;

            circumference = 2 * PI * radius;

            switch ( choice_b )
            {
                case 1: cout << endl << endl << "The area of your circle is " << area << "." << endl;
                break;

                case 2: cout << endl << endl << "The circumference of your circle is " << circumference << "." << endl;
                break;

                default: cout << endl << endl << "Please make an appropriate selection.";
                break;
            }
            break;

        case 2:
            cout << endl << "What property would you like to evaluate?" << endl
                 << "1. Area" << endl
                 << "2. Perimeter" << endl;
            cin  >> choice_b;

            cout << endl << "What is the length of your square's side?" << endl;
            cin  >> side;

            area = side * side;

            perimeter = 4 * side;

            switch ( choice_b )
            {
                case 1: cout << endl << endl << "The area of your square is " << area << "." << endl;
                break;

                case 2: cout << endl << endl << "The perimeter of you square is " << perimeter << "." << endl;
                break;

                default: cout << endl << endl << "Please make an appropriate selection." << endl;
                break;
            }
            break;

        default: cout << endl << "Please make an appropriate selection." << endl;
        break;
    }

    system ("PAUSE > NUL");

    return 0;

}
