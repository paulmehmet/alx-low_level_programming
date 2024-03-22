#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * print_array = A function to print search array
 * 
 */
int print_array(int *array, size_t L, size_t R) {
    size_t i;

    printf("Searching in array: ");
    for( i = L; i < R; i++) {
        printf("%d, ", array[i]);
    }
    printf("%d\n", array[i]);
    
    return 0;
}

/**
 * binary_search - A function that searches for a value in an
 * array integers using Binary search algorithm
 * @array: An array pointer to the first element in the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return - If value is not present in array or
 * if array is NULL, your function must return -1
 */
int binary_search(int *array, size_t size, int value){
    size_t L, R, m;

    L = 0;
    R = size - 1;

    
    while (L <= R) {
        print_array(array, L, R);
        m = (L + R) / 2;

        if (array[m] < value){
            L = m + 1;
        } 
        else if (array[m] > value){
            R = m - 1;
        }
        else {
            return m;
        }
    }

    return -1;
}
