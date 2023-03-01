#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n element of an array of integers.
 * @a: array of integers
 * @n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}

	printf("\n");
}
