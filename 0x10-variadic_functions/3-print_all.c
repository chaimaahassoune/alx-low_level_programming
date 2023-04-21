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
	int p = 0, num = 0;
	va_list arg;
	char *s;
	char *separator = ", ";
	

	va_start(arg, format);
	

	while (format && format[p])
		p++;

	while (format && format[num])
	{
		if (num  == (p - 1))
		{
			separator = "";
		}
		switch (format[num])
		{
		case 'c':
			printf("%c%s", va_arg(arg, int), separator);
			break;
		case 'i':
			printf("%d%s", va_arg(arg, int), separator);
			break;
		case 'f':
			printf("%f%s", va_arg(arg, double), separator);
			break;
		case 's':
			s = va_arg(arg, char *);
				
			if (s == NULL)
				s = "(nil)";
			printf("%s%s", s, separator);
			break;
		}
		num++;
	}
	printf("\n");
	va_end(arg);
}

