template <class T>
void quickSortRecursive(T values[], int start, int end)
{
    if (start < end)
    {
        int pivot_point;

        pivot_point = partitionAux(values, start, end);

        quickSortRecursive(values, start, pivot_point-1);

        quickSortRecursive(values, pivot_point+1, end);
    }
}

template <class T>
int partitionAux(T values[], int start, int end)
{
    int middle = (start + end) / 2,
        pivot_index = 0;
    T pivot_value = values[middle];

    swapAux(values[start], values[middle]);

    for (int i = start + 1; i <= end; i++ )
    {//cout << values[i] << endl;
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