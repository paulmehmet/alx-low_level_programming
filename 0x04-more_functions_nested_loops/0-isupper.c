#include "main.h"
/**
 * _isupper - checks if c is uppercase
 * @c: character to check
 *
 * Return: gives 1 (if it is upper) or 0 (if otherwise)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
