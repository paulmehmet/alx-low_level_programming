#include "main.h"
#include <string.h>
/**
 * _strcat - Entry Function
 * @dest: pointer to char type
 * @src: pointer to char type
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
int i, dest_len, src_len;
dest_len = strlen(dest);
src_len = strlen(src);
for (i = 0; i < src_len + 1; ++i)
{
dest[dest_len + i] = src[i];
}
return (dest);
}
