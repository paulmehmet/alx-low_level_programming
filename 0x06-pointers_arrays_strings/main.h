#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: destination of concat
 * @src: source array to concat
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: destination of concat
 * @src: source array to concat
 * @n: amount of times to append
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - function that copies a string.
 * @dest: destination to copy
 * @src: source to copy
 * @n: amount of places to copy
 * Return: value of dest
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - function that compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: value of string
 */
int _strcmp(char *s1, char *s2);

/**
 * reverse_array - function that reverses
 * the content of an array of integers
 *
 * @a: array to reverse
 * @n: size of array
 */
void reverse_array(int *a, int n);

/**
 * string_toupper - function that changes all lowercase
 * letters of a string to uppercase.
 * @s: character to make upper
 * Return: return value of upper
 */
char *string_toupper(char *s);

/**
 * _indexOf - returns boolean if special  character
 * @a: character to return
 * Return: true or false
 */
int _indexOf(char a);

/**
 * cap_string - function that capitalizes all words of a string.
 * @s: string
 * Return: the string capitalized
 */
char *cap_string(char *s);

/**
 * leet - function that encodes a string into 1337.
 * @s: string
 *
 * Return: char value
 */
char *leet(char *s);

/**
 * rot13 - function that encodes a string using rot13.
 * @s: string to encrypt
 * Return: char value
 */
char *rot13(char *s);

/**
 * print_number - function that prints an integer.
 * @n:integer to convert to character
 *
 */
void print_number(int n);

/**
 * infinite_add - function that adds two numbers.
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
* print_line - prints a s bytes of a buffer
* @c: buffer to print
* @s: bytes of buffer to print
* @l: line of buffer to print
*/
void print_line(char *c, int s, int l);

/**
* print_buffer - prints a buffer
* @b: buffer to print
* @size: size of buffer
*/
void print_buffer(char *b, int size);


#endif
