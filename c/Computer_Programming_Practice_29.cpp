/*
    File: Computer_Programming_Practice_29.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P29
    --/--/--

    This program calculates various properties of two shapes, a cirlce and a
    square. The program prompts the user to choose between a circle and a square
    and then invites the user to enter values for integral dimensions of the
    shape to be used to calculate the properties (e.g. area and circumference
    of the circle and Area and Perimeter of the square).

    Input (keyboard): choice_a            (integer)
                      choice_b            (integer)
                      radius              (integer)
                      length              (integer)
    Constants:        PI = 3.1415         (double)
    Output (display):
            Sample Output:
                    Welcome to the Shape Calculator
                    Please choose a shape
                    1. Circle
                    2. Square

                    You chose circle
                    Please choose the property you would like to find
                    1. Area
                    2. Circumference

                    You chose Area
                    What is the radius of your circle
                    <radius>
                    The area of your circle is <PI * pow ( radius, 2.0 ))
*/

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main ( )
{
    const double PI = 3.1415;

    int choice_a,
        choice_b;

    cout << "Welcome to the Shape Calculator!" << endl
         << "Please choose a shape:" << endl
         << "1. Circle" << endl
         << "2. Square" << endl;
    cin  >> choice_a;

    switch ( choice_a )
    {
        case 1:
            int radius;
            cout << "You chose the circle" << endl
                 << "Which property would you like to find?" << endl
                 << "1. Area" << endl
                 << "2. Circumerence" << endl;
            cin  >> choice_b;
            switch ( choice_b )
            {
                    case 1:
                        cout << "You chose Area" << endl
                             << "What is the radius of your circle?" << endl;
                        cin  >> radius;
                        cout << "The Area of your circle is " << PI * pow ( radius, 2.0 ) << endl;
                        break;

                    case 2:
                        cout << "You chose Circumference" << endl
                             << "What is the radius of you Circle?" << endl;
                        cin  >> radius;
                        cout << "The Circumference of your circle is " << PI * ( 2 * radius ) << endl;
                        break;

                    default:
                        cout << "Invalid Input" << endl << "The program will now terminate." << endl;
                        break;
               }
               break;

        case 2:
            int length;
            cout << "You chose the square" << endl
                 << "Which Property would you like to find?" << endl
                 << "1. Area" << endl
                 << "2. Perimeter" << endl;
            cin  >> choice_b;

                switch ( choice_b )
                {
                    case 1:
                        cout << "You chose the Area" << endl
                             << "What is the length of the sides of your square?" << endl;
                        cin  >> length;
                        cout << "The area of your square is " << pow ( length, 2.0 ) << endl;
                        break;

                    case 2:
                        cout << "You chose the Perimeter" << endl
                             << "What is the length of the sides of your square?" << endl;
                        cin  >> length;
                        cout << "The perimeter of your square is " << 4 * length << endl;
                        break;
                    default:
                        cout << "Invalid Input" << endl << "The program will now terminate" << endl;
                        break;
                }
                break;

        default:
                        cout << "Invalid Input" << endl << "The program will now terminate" << endl;
                        break;

    }

    system ("PAUSE > NUL");

    return 0;

}
