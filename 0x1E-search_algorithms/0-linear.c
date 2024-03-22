#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in an
 * array integers using linear search
 * @array: An array pointer to the first element in the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return - If value is not present in array or
 * if array is NULL, your function must return -1
 */
int linear_search(int *array, size_t size, int value){
    size_t i;

    if (array == NULL) {
        return -1;
    }
    else {
        for (i = 0; i < size; i++) {
            printf("Value checked array[%lu] = [%d]\n", i, array[i]);

            if (value == array[i]) {
                return i;
            }
        }
    }

    return -1;
}
