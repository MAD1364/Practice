#include <iostream>

using namespace std;

template <class T>
void quickSortRecursive(T values[], int start, int end)
{
    int pivot_point;

    if (start < end)
    {
        pivot_point = partitionAux(values, start, end);

        quickSortRecursive(values, start, pivot_point-1);

        quickSortRecursive(values, pivot_point+1, end);
    }
}

template <class T>
int partitionAux(T values[], int start, int end)
{
    int middle = (start + end) / 2,
        pivot_index = start;
    T pivot_value = values[middle];

    swapAux(values[start], values[middle]);

    for (int i = start + 1; i <= end; i++ )
    {
        if ( values[i] < pivot_value )
        {
            pivot_index++;
            swapAux(values[i], values[pivot_index]);
        }
    }

    swapAux(values[start], values[pivot_index]);

    return pivot_index;
}

template <class T>
void swapAux(T &value_one, T &value_two)
{
    T temporary = value_one;
    value_one = value_two;
    value_two = temporary;
}