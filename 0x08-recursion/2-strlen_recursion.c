#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to check the length
 * Return: length of string s
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len = _strlen_recursion(s + 1);
		return (len += 1);
	}
	return (0);
}
