#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);

/**
 * _isupper - function to check if a character (c) is uppercase or not
 *
 * @c: character to check
 *
 * Return: 1 if c is uppercase 0 otherwise
 */
int _isupper(int c);

/**
 * _isdigit - function that checks if a value (c) is a digit
 *
 * @c: value to check
 *
 * Return: 1 if c is a digit 0 otherwise
 */
int _isdigit(int c);

/**
 * mul - function that multiplies two integers
 * @a: first integer to multiply
 * @b: second integer to multiply
 * Return: result of the multiplication
 */
int mul(int a, int b);

/**
 * print_numbers - function that prints the numbers from 0 to 9
 *
 */
void print_numbers(void);

/**
 * print_most_numbers - function that prints 0 to 9 (except 2 and 4)
 *
 */
void print_most_numbers(void);

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 */
void more_numbers(void);

/**
 * print_line - function that draws a straight line in the terminal.
 *
 * @n: number of times the character _ should be printed
 */
void print_line(int n);

#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 *
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n);

#include "main.h"
/**
 * print_square - function that prints a square, followed by a new line.
 *
 * @size: integer to set the size of the square
 */
void print_square(int size);

/**
 * print_triangle - function that prints a triangle
 *
 * @size: size of the triangle
 */
void print_triangle(int size);

/**
 * print_number - function that prints an integer.
 *
 * @n: integer to print
 */
void print_number(int n);

#endif
