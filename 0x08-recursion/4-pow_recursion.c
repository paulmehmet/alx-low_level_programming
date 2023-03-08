#include "main.h"

/**
 * _pow_recursion - function that returns
 * the  value of x raise to the power of y
 * @x: the base number
 * @y: the power
 * Return: returns the value of x raise to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
