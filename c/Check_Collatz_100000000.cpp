#include <iostream>

using namespace std;

int main()
{
    long value = 100000000;
    int length = 0;

    while (value != 1)
    {
        if (value % 2 == 0)
            value = value / 2;
        else //value is odd
            value = value * 3 + 1;

        length++;
    }

    cout << "Length of sequence: " << length << endl;

    return 0;
}