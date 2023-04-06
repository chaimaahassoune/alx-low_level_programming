#include "main.h"

/**
 * factorial - calculat the factorial of a given number
 * @n: the number
 *
 * Return: the result
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
