#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: destination of concat
 * @src: source array to concat
 * @n: amount of times to append
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);

}
