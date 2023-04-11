#include <stdio.h>
#include <stdlib>
#include "main.h"

/**
 * main - make change
 * @argc: the number of command-line arguments
 * @argv: an array
 *
 * Return: 0 on successs, 1 on failure
 */
int main(int argc, char **argv)
{
	int cents, c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			c++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			c++;
		}
		else if (cents >= 5)
                {
                        cents -= 5;
                        c++;
		}
		else if (cents >= 2)
                {
                        cents -= 2;
                        c++;
		}
		else
		{
			cents--;
			c++;
		}
	}

	printf("%d\n", c);
	return (0);
}



