#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: the number of command-line arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char **argv)
{
	int i, number, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		number = atoi(argv[i]);

		if (number <= 0)
		{
			printf("Error\n");
			return (1);
		}

		sum + = number;
	}
	printf("%d\n", sum);
	return (0);
}
