#include "main.h"

/**
 * is_prime_helper - check whether a given integer is a prime number or not
 * @n: the given number
 * @divisor: a couter for testing
 *
 * Return: it return 0 or 1
 */
int is_prime_helper(int n, int divisor)
{
	if (n < 2)
		return (0);
	else if (divisor == 1)
		return (1);
	else
		return (is_prime_number_counter(n, divisor - 1));
}

/**
 * is_prime_number - check whether a given integer is a prime number or not
 * @n: the number
 *
 * Return: it return 0 or 1
 */
int is_prime_number(int n)
{
	return (is_prime_number(n, n - 1));
}
