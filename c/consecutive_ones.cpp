#include <bits/stdc++.h>
#include <forward_list>
#include <iostream>

using namespace std;



int main()
{
    int n,
        base,
        remainder,
        consecutive_ones = 0,
        max_ones = 0;

    forward_list<int> bits;

    cin >> n;
    cin.ignore();

    base = n;

    while (base != 0)
    {
        remainder = base % 2;
        base = base / 2;

        bits.push_front(remainder);
    }

    if (n == 0)
        cout << "0";
    else
    {
        for (int& x: bits)
        {
            cout << x << endl;
            if (x == 1)
            {
                consecutive_ones++;
                if (max_ones < consecutive_ones)
                    max_ones = consecutive_ones;
            }
            else
                consecutive_ones = 0;
        }

        cout << max_ones;
    }


    return 0;
}
