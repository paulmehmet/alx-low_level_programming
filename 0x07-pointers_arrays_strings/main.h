#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);

/**
 * _memset - sets memory to array
 * @s: array to set
 * @b: value to set it as
 * @n: number of times to fill
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n);


/**
 * _memcpy - copies from source to dest values in array
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: number areas to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);


#include "main.h"
/**
 * _strchr - locates character in string
 * @s: string to locate char
 * @c: character to find
 * Return: character value
 */
char *_strchr(char *s, char c);

/**
 * _strspn - get the length of prefix substring
 * @s: string to go through
 * @accept: accepted bytes
 * Return: returns usigned values
 */
unsigned int _strspn(char *s, char *accept);


/**
 * _strpbrk - finds string
 * @s: string to find stuff
 * @accept: accepting arrays
 *
 * Return: returns new value
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locates substring
 * @haystack: string to locte
 * @needle: substring to locate
 * Return: returns string at starting sub or null
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - board to print
 * @a: prints things
 * Return: returns crap
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - prints diagonal summaries
 * @a: array to use
 * @size: size of diagonal
 */
void print_diagsums(int *a, int size);

/**
 * set_string -  sets a string
 * @s: string to set
 * @to: value to set to
 */
void set_string(char **s, char *to);


#endif
