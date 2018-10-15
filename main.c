#include <stdlib.h>
#include <stdio.h>
#include "mergeSort.h"

int main()
{
    int size, *array;
    printf("Enter array size: \n");
    scanf("%d", &size);
    array = malloc(sizeof(int) * size);
    printf("Enter %d elements: \n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &array[i]);
    }
    mergeSort(array, 0, size - 1);
    printf("Sorted array: \n");
    for (int j = 0; j < size; ++j) {
        printf("%d ", array[j]);
    }

    return 0;
}