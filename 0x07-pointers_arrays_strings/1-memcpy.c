#include "main.h"
/**
 * _memcpy - copies from source to dest values in array
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: number areas to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
