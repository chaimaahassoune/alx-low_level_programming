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
	int i = 0, n = 0;
	char *s;
	char c;
	int num;
	double number;


	va_start(arg, format);


	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;

			case 'i':
				num = va_arg(arg, int);
				printf("%d", num);
				break;
			case 'f':
				number = va_arg(arg, double);
				printf("%.2f", number);
				break;
			case 's':
				s =  va_arg(arg, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				break;
		}

	
		if (format[i + 1] && num_args)
			printf(", ");
	}

	va_end(arg);

	printf("\n");
}
