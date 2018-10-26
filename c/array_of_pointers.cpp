#include <iostream>

using namespace std;

int main()
{
    int **ptr_arr;

    ptr_arr = new int*[20];

    for (int i = 0; i < 20; i++) {
        ptr_arr[i] = new int[5];
        for (int j = 0; j < 5; j++)
        {
            ptr_arr[i][j] = i + j;
            cout << ptr_arr[i][j] << " ";
        }
        cout << " " << ptr_arr[i] << endl;
    }

    return 0;
}