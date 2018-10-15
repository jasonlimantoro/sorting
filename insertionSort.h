#ifndef SORTING_INSERTIONSORT_H
#define SORTING_INSERTIONSORT_H

void insertionSort(int *array, int size, unsigned long int *totalComparisons);
void insert(int *array, int key, int value, unsigned long int *totalComparisons);
void swap(int *array, int first, int second);

#endif //SORTING_INSERTIONSORT_H
