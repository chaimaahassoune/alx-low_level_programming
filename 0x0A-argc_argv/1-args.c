#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments
 * @argc: the number of command-line arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);

	(void)argv;
	return (0);
}
