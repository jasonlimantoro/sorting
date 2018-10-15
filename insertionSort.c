#include <stdio.h>
#include "insertionSort.h"

void insertionSort(int *array, int size, int *totalComparisons)
{
    for (int i = 1; i < size; ++i) {
        insert(array, i, array[i], totalComparisons);
    }
}

void insert(int *array, int index, int value, int *totalComparisons)
{
    int position = index;
    while (position > 0){
        (*totalComparisons)++;
        if (array[position - 1] > value){
            swap(array, position, position - 1);
            position--;
        } else {
            break;
        }
    }
}

void swap(int *array, int first, int second)
{
    int temp = array[first];
    array[first] = array[second];
    array[second] = temp;
}

