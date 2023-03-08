#include "main.h"
#include "2-strlen_recursion.c"

/**
 * pal_checker - to check if a string is palindrome
 * @s: string to check
 * @l: length of the string
 * @i: iterator for the checker
 *
 * Return: 1 if palindrome, 0 if otherwise
 */
int pal_checker(char *s, int l, int i)
{
	if (s[i] != s[l - 1])
		return (0);
	if (i >= l)
		return (1);
	return (pal_checker(s, l - 1, i + 1));
}

/**
 * is_palindrome - function that returns 1
 * if a string is a palindrome and 0 if not
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;

	len = _strlen_recursion(s);

	if (len == 0 || *s == 0)
		return (1);
	else
		return (pal_checker(s, len, 0));
}
