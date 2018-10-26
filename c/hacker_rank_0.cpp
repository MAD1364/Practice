#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int second_int = 0;
    double second_double = 0.0;
    string second_string;

    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

    cin >> second_int;
    cin >> second_double;
    cin.ignore();
    getline(cin, second_string);

    // Print the sum of both integer variables on a new line.
    cout << i + second_int << endl;
    // Print the sum of the double variables on a new line.

    cout << setprecision(2) << (d + second_double) << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + second_string << endl;

    return 0;
}