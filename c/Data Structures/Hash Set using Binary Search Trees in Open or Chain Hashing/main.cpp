#include <iostream>
#include "MyHashSetBinary.h"

using namespace std;

int main()
{
    MyHashSetBinary obj; // calls default constructor

    obj.add(9);
    cout << "HERE" << endl;
    obj.remove(19);
    cout << "HERE" << endl;
    obj.add(14);
    cout << "HERE" << endl;
    obj.remove(19);
    cout << "HERE" << endl;
    obj.remove(9);
    cout << "HERE" << endl;
    obj.add(0);
    cout << "HERE" << endl;
    obj.add(3);
    cout << "HERE" << endl;
    obj.add(4);
    cout << "HERE" << endl;
    obj.add(0);
    cout << "HERE" << endl;
    obj.remove(9);
    cout << "HERE" << endl;

    obj.add(58);
    obj.contains(0);
    obj.add(14);
    obj.contains(58);
    obj.remove(91);
    obj.add(6);
    obj.contains(58);
    obj.add(66);
    obj.add(51);
    obj.add(16); obj.add(40); obj.add(52); obj.add(48); obj.contains(40);
    obj.add(42); obj.add(85); obj.add(36); obj.contains(16); obj.remove(0);

    return 0;
}
