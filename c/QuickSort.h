#ifndef QUICKSORT_H
#define QUICKSORT_H

template <class T> void  quickSortRecursive(T[], int, int);
template <class T> int   partitionAux(T[], int, int);
template <class T> void  swapAux(T&, T&);

#include "QuickSort.cpp"

#endif // QUICK_SORT