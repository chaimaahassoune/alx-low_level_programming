#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints string.
 *
 * @separator: The string to be printed between strings.
 * @n: The number of strings.
 * @...: The strings to print.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int p;
	char *s;

	va_start(arg, n);

	for (p = 0; p < n; p++)
	{
		s = va_arg(arg, char *);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator && p != n - 1)
			printf("%s", separator);
	}

	va_end(arg);

	printf("\n");
}
