#include <iostream>
#include <cstdlib>
#include "QuickSort.h"

using namespace std;

template <class T>
void displayArrayValues(T[], int);

int main()
{cout << "UP HERE" << endl;
    int number[] = { 10, 9, 234, 8, 3, -3, 523, 10398, 1, 4, 2 };
    char characters[] = { 'y', 'w', 'u', 'q', 'i', 'p', 'o', 'd', 'c' };
    double floating[] = { 3.3, 12.3, 398.2, 53.1, 623.4, 92.0, 1.3, 18.7 };
cout << "HERE" << endl;
    quickSortRecursive(number, 0, 10);
    quickSortRecursive(characters, 0, 8);
    quickSortRecursive(floating, 0, 7);

    displayArrayValues(number, 11);
    displayArrayValues(characters, 9);
    displayArrayValues(floating, 8);

    return EXIT_SUCCESS;
}

template <class T>
void displayArrayValues(T values[], int size)
{
    for (int i = 0; i < size; i++ )
        cout << values[i] << " ";

    cout << endl << endl;
}