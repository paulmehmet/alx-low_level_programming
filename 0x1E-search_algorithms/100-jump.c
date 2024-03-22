#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * min_index - A function to get min index
 * 
 */
size_t min_index(size_t b, size_t size) {
   if (size > b){
        return b;
   }else {
    return size;
   }
}

/**
 * jump_search - A function that searches for a value in an
 * array integers using Binary search algorithm
 * @array: An array pointer to the first element in the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return - If value is not present in array or
 * if array is NULL, your function must return -1
 */
int jump_search(int *array, size_t size, int value){
    size_t a, b;

    a = 0;
    b = sqrt(size);

    if (array == NULL && size == 0) {
        return -1;
    }

    while (array[min_index(b, size) - 1] < value){
        printf("Value checked array[%lu] = [%d]\n", a, array[a]);

        a = b;
        b += sqrt(size);

        if (a >= size) {
            return -1;
        }
    }

    printf("Value found between indexes [%lu] and [%lu]\n", a, b);
    
    while (array[a] < value) {
        printf("Value checked array[%lu] = [%d]\n", a, array[a]);
        a++;
        
        if (a == min_index(b, size)) {
            return -1;
        }
    }

    if (array[a] == value) {
        return a;
    }

    return -1;
}
