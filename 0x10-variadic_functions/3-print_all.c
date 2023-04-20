#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_all - Prints anything.
 *
 * @format: A list of types of arguments.
 * @...: The arguments to print.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int p = 0;
	char *s;
	char *separator = "";


	va_start(arg, format);

	if (format)
	{
		while (format[p])
		{
			switch (format[p])
			{
				case 'c':
					printf("%s%c", separator, va_arg(arg, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(arg, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(arg, double));
					break;
				case 's':
					s = va_arg(arg, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;

				default:
					p++;
					continue;
			}
			separator = ", ";
			p++;
		}
	}
	va_end(arg);
	printf("\n");
}
