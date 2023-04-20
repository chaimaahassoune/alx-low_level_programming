#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * sum_them_all - the sum of all its parameters.
 * @n: The number of parameters.
 * @...: The parameters to summ.
 *
 * Return: the sum, or 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int p, sum = 0;

	if (n == 0)
		return (0);

	va_start(arg, n);
	
	for (p = 0; p < n; p++)
	{
		sum += va_arg(arg, const unsigned int);
	}

	va_end(arg);

	return (sum);
}

