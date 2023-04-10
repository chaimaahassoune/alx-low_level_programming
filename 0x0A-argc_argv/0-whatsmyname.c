#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: the number of command-line arguments passed
 * @argv: an ary of strings containing the command-line arguments
 *
 * return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i = 0;
	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');
	(void)argc;
	return (0);
}
