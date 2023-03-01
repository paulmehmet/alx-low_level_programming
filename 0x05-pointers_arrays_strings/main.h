#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);

/**
 * reset_to_98 - update a pointer's referenced value to 98
 *
 * @n: the number to be updated
 *
 */
void reset_to_98(int *n);

/**
 * swap_int - function that swaps the values of two integers
 * @a: pointer to the first integer to be swapped
 * @b: pointer to the second integer to be swapped
 * @tmp: integer to hold a temporary value for the swap
 */
void swap_int(int *a, int *b);

/**
 * _strlen - function that returns the length of a string
 * @s: string to get length
 *
 * Return: length of the string s
 */
int _strlen(char *s);

/**
 * _puts - function that prints a string
 * @str: string to be printed
 */
void _puts(char *str);

/**
 * print_rev - function that prints a string, in reverse
 * @s: string to be reversed
 */
void print_rev(char *s);

/**
 * rev_string - function that reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s);

/**
 * puts2 - function that prints every other character of a string
 * @str: string to be printed
 */
void puts2(char *str);

/**
 * puts_half - function that prints half of a string.
 * @str: string to be printed
 */
void puts_half(char *str);

/**
 * print_array - function that prints n element of an array of integers.
 * @a: array of integers
 * @n: number of elements of the array to be printed
 */
void print_array(int *a, int n);


/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: destination to copy to
 * @src: source to copy from
 * Return: value of dest
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - function that converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s);



#endif
