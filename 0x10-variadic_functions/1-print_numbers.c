#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers
 * @separator: the separator
 * @n: the number of string
 * @...: The int to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;

	unsigned int p;

	va_start(arg, n);


	for (p = 0; p < n; p++)
	{
		printf("%d", va_arg(arg, int));

		if (separator && p != n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(arg);

	printf("\n");
}
