#include <stdio.h>
#include "mergeSort.h"

void mergeSort(int *array, int first, int last)
{
    int mid = (first + last) / 2;
    if (first >= last){
        return;
    } else if (last - first > 1) {
        mergeSort(array, first, mid);
        mergeSort(array, mid + 1, last);
    }
    merge(array, first, last);

}

void merge(int *array, int first, int last)
{
    // one or less element
    if (last - first <= 0){
        return;
    }
    int mid = (first + last) / 2;
    int first2 = mid + 1, first1 = first, j = 0;
    int sizeSubList = last - first + 1;
    int sortedSubList[sizeSubList];
    while (first1 <= mid && first2 <= last){
        // filling the sub-array
        if (array[first1] < array[first2]){
            sortedSubList[j] = array[first1];
            first1++;
        } else if (array[first2] < array[first1]) {
            sortedSubList[j] = array[first2];
            first2++;
        } else {
            // same element
            sortedSubList[j] = array[first1];
            sortedSubList[j + 1] = array[first1];
            j++;first1++;first2++;
        }
        j++;
    }

    // the remaining elements that does not need comparison, if any
    while (first1 <= mid){
        sortedSubList[j++] = array[first1++];
    }
    while (first2 <= last){
        sortedSubList[j++] = array[first2++];
    }

    // copy to the original array
    for (int k = 0; k < sizeSubList; ++k) {
        array[first + k] = sortedSubList[k];
    }
}
