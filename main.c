#include <stdlib.h>
#include <stdio.h>
#include "mergeSort.h"
#include "insertionSort.h"

int main()
{
    int size, *array, option;
    printf("Enter array size: \n");
    scanf("%d", &size);
    array = malloc(sizeof(int) * size);
    printf("Enter %d elements: \n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &array[i]);
    }
    printf("1. Merge sort\n");
    printf("2. Insertion sort\n");
    printf("Choose sorting:\n");
    scanf("%d", &option);
    switch (option){
        case 1:
            printf("Merge Sort\n");
            mergeSort(array, 0 , size - 1);
            break;
        case 2:
            printf("Insertion sort\n");
            insertionSort(array, size);
            break;
        default:
            printf("Not supported\n");
    }
    printf("Sorted array: \n");
    for (int j = 0; j < size; ++j) {
        printf("%d ", array[j]);
    }
    printf("\n");

    return 0;
}