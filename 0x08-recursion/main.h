#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);

/**
 * _puts_recursion - funtion that prints a string
 * @s: string to print
 */
void _puts_recursion(char *s);

/**
 * _print_rev_recursion - funtion that prints a string in reverse
 * @s: string to print
 */
void _print_rev_recursion(char *s);


/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to check the length
 * Return: length of string s
 */
int _strlen_recursion(char *s);

/**
 * factorial - function that returns the factorial of a number
 * @n: number to get factorial of
 *
 * Return: factorial of n
 */
int factorial(int n);

/**
 * _pow_recursion - function that returns
 * the  value of x raise to the power of y
 * @x: the base number
 * @y: the power
 * Return: returns the value of x raise to power y
 */
int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 *
 * Return: square root of n or -1
 */
int _sqrt_recursion(int n);

/**
 * is_prime_number - function that returns 1
 * if the input inger is a prime number otherwise return 0;
 * @n: the number to check
 *
 * Return: 1 if n is prime 0 if otherwise
 */
int is_prime_number(int n);

/**
 * is_palindrome - function that returns 1
 * if a string is a palindrome and 0 if not
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if otherwise
 */
int is_palindrome(char *s);

/**
 * wildcmp - A function that compares two strings
 * @s1: First input string
 * @s2: Second input string
 * Return: 1 if strings identical and 0 in otherwise
 */
int wildcmp(char *s1, char *s2);


#endif
