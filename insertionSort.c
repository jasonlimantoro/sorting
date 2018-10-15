#include <stdio.h>
#include "insertionSort.h"

void insertionSort(int *array, int size)
{
    for (int i = 0; i < size; ++i) {
        insert(array, i, array[i]);
    }
}

void insert(int *array, int index, int value)
{
    int position = index;
    while (position >= 0 && array[position - 1] > value){
        swap(array, position, position - 1);
        position--;
    }
}

void swap(int *array, int first, int second)
{
    int temp = array[first];
    array[first] = array[second];
    array[second] = temp;
}

