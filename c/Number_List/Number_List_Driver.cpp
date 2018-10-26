#include <iostream>
#include <cstdlib>
#include "Number_List.h"

using namespace std;

int main()
{
    NumberList new_list;
    int max_number = 0;

    for ( int i = 0; i < 20; i+=2 )
        new_list.appendNode(i);

    new_list.displayNode(cout);

    for ( int i = 1; i < 20; i+=2 )
        new_list.appendNode(i);

    new_list.displayNode(cout);

    new_list.deleteList();

    for ( int i = 0; i < 30; i+=2 )
        new_list.appendNode(i);

    new_list.displayNode(cout);

    for ( int i = 29; i > 0; i-= 2)
        new_list.insertNode(i);

    new_list.appendNode(777);

    new_list.displayNode(cout);

    max_number = new_list.maxNode(new_list.listAnchor());

    cout << "Max Number: " << max_number << endl;

    return EXIT_SUCCESS;
}