#include "main.h"

/**
 * prime_checker - check if number is prime
 * @p: possible prime number
 * @f: factor to check with
 *
 * Return: 1 if prime, 0 if not
 */
int prime_checker(int p, int f)
{
	if (p < 2 || p % f == 0)
		return (0);
	else if (f > p / 2)
		return (1);
	else
		return (prime_checker(p, f + 1));
}

/**
 * is_prime_number - function that returns 1
 * if the input inger is a prime number otherwise return 0;
 * @n: the number to check
 *
 * Return: 1 if n is prime 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	else
		return (prime_checker(n, 2));
}
