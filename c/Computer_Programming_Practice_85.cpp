/*
    File: Computer_Programming_Practice_85.cpp

    Author: Mario Delagarza
    C.S.1428.001
    Lab Section: L07
    Program: P85
    --/--/--

    This program

    Input:
    Constants:
    Output:
*/

#include <iostream>
#include <cmath>

using namespace std;

/*void print (int, const double);

int main ( )
{
    const double PI = 3.14159;

    print (10, PI);

    return 0;
}

void print (int param1, const double param2)
{
    cout << "Parameter 1 is " << param1 << endl
         << "Parameter 2 is " << param2 << endl;
}


void add_10 (double);

int main ( )
{
    double var = 5.0;

    cout << "In main, var = " << var << endl;

    add_10 ( var );

    cout << "In main, after calling function, var = " << var << endl;

    return 0;
}

void add_10 ( double foo )
{
    foo = foo + 10;

    cout << "In function, foo = " << foo << endl;
}


 void print_sum ( int, int );

 int main ( )
 {
     int a = 10,
         b = 20,
         c = 30,
         total;

    print_sum ( b, c );
    print_sum ( a, c );
    print_sum ( a, b );

    return 0;
 }

 void print_sum ( int first, int second )
 {
     cout << "The sum of " << first << " and " << second << " is "
          << first + second << endl;
 }


 int sum ( int, int );

 int main ( )
 {
     int num1,
         num2,
         total;

    cout << "Welcome to my super calculator 2000." << endl
         << "Please enter two numbers to find their sum!" << endl;
    cin  >> num1 >> num2;

    total = sum ( num1, num2 );

    cout << num1 << " + " << num2 << " = " << total << endl;

    return 0;
}

int sum ( int a, int b )
{
    return ( a + b );
}


double pythagorean_theorem ( double, double );

int main ( )
{
    double main_num1,
           main_num2,
           hypotenuse;

    cout << "Please enter two sides of your triangle to find the hypotenuse." << endl;
    cin  >> main_num1 >> main_num2;

    hypotenuse = pythagorean_theorem ( main_num1, main_num2 );

    cout << main_num1 << "^2 + " << main_num2 << "^2 = " << hypotenuse << "^2";

    return 0;
}

double pythagorean_theorem ( double num1, double num2 )
{
    double hypotenuse;

    hypotenuse = sqrt ( (num1 * num1) + (num2 * num2) );

    return hypotenuse;
}


int sum ( int, int );
int subtract ( int, int );
void print ( char, int, int, int );

int main ( )
{
    int main_num1,
        main_num2,
        total;

    char operatr;

    bool flag = false;

    cout << "Welcome to a simple calculator." << endl
         << "Please enter the first number, "
         << "operation (+ or -), then the second number." << endl;

    cin  >> main_num1 >> operatr >> main_num2;

    switch ( operatr )
    {
        case '+':
            total = sum ( main_num1, main_num2 );
            break;
        case '-':
            total = subtract ( main_num1, main_num2 );
            break;
        default:
            cout << "Invalid operator" << endl;
            flag = true;
            break;
    }

    if ( !flag )
        print ( operatr, main_num1, main_num2, total );

    return 0;
}

int sum ( int num1, int num2 )
{
    return ( num1 + num2 );
}

int subtract ( int num1, int num2 )
{
    return ( num1 - num2 );
}

void print ( char operatr, int num1, int num2, int result )
{
    cout << num1 << " " << operatr << " " << num2 << " = " << result;
}


void incrementValue ( int &);

int main ( )
{
     int age,
         new_age;

     cout << "Enter your age: ";
     cin  >> age;

     cout << endl
          << "You are currently " << age << " years old.";

     incrementValue ( age );

     new_age = age;

     cout << endl
          << "In one year, you will be " << new_age << " years old.";
     cout << age;

     return 0;
 }

void incrementValue ( int &number )
{
     ++number ;
 }


int sum_numbers ( int &num1, int &num2 );

int main ( )
{
    int number_1,
        number_2,
        total;

    //cout << "Enter two integers: ";
    //cin  >> number_1 >> number_2;

    total = sum_numbers ( number_1, number_2 );

    cout << total << " " << number_1 << " " << number_2;

    return 0;
}

int sum_numbers ( int &num1, int &num2 )
{
    int total;

    cout << "Enter two integers: ";
    cin  >> num1 >> num2;    //values being entered as part of an external function
                             //will be saved in variables created in that function and
                             // in order for these values to be present in the main
                             //function, they must be passed by reference or the
                             //variables or locations in memory for the variables
                             //created within main must have access to the memory
                             //locations of the variable created in the external function.
                             // Otherwise, the variables in the main function will have
                             //default values that do not represent what is manipulated or
                             // entered in the external function.

    total = num1 + num2;

    return total;
}
*/


