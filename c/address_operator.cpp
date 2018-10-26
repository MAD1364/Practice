#include <iostream>

int main()
{
    //using the new operator stores the address of an
    //integer array of 10 contiguous words in t
    int *t = new int[10];
    //u is simply assigned the address that t contains
    //Dereferencing either accesses the actual location
    //in memory they each "point" to or contain the
    //address of
    int *u = t;

    std::cout << "t: " << t << std::endl
              << "u: " << u << std::endl;

    for (int i = 0; i < 10; i++)
    {
        //initialize t[i] to avoid garbage
        t[i] = 0;
        //print the contents of the location in memory
        //that t[i] refers to, the ith element of the
        //array t which t contains the address of
        std::cout << t[i] << std::endl;
    }

    std::cout << std::endl;

    for (int i = 0; i < 10; i++)
        //print the address of every element of the
        //array t contains the address of. Using the
        //address operator returns the address of the
        //ith element in the array t.
        std::cout << &t[i] << std::endl;

    return 0;
}