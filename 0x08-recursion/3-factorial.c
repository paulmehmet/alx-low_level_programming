#include "main.h"

/**
 * factorial - function that returns the factorial of a number
 * @n: number to get factorial of
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0)
		return (n * factorial(n - 1));
	else
		return (1);
}
