#include "main.h"

/**
 * sqrt_finder - checks for the square root of c
 * @n: number to find sqrt of
 * @g: for guessing sqrt
 *
 * Return: -1 or sqrt of n
 */
int sqrt_finder(int n, int g)
{
	if (g * g == n)
		return (g);
	if (g * g > n)
		return (-1);
	return (sqrt_finder(n, g + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: square root of n or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_finder(n, 1));
}
