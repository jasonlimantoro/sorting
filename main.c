#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "mergeSort.h"
#include "insertionSort.h"

int main()
{
    int size, *array, option, comparisons = 0;
    int *ptrComparisons = &comparisons;
    clock_t start, end;
    double cpu_used;

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
            start = clock();
            mergeSort(array, 0, size - 1, ptrComparisons);
            end = clock();
            cpu_used = ((double) (end - start)) / (double) CLOCKS_PER_SEC;
            printf("Total comparisons done: %d\n", comparisons);
            printf("Total CPU time: %.8lf (seconds)\n", cpu_used);
            break;

        case 2:
            printf("Insertion sort\n");
            start = clock();
            insertionSort(array, size, ptrComparisons);
            end = clock();
            cpu_used = ((double) (end - start)) / (double) CLOCKS_PER_SEC;
            printf("Total comparisons done: %d\n", comparisons);
            printf("Total CPU time: %.8lf (seconds)\n", cpu_used);
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