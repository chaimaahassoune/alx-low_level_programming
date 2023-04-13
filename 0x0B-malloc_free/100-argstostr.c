#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of a program
 * @ac: the number of arguments
 * @av: an array of poiter to the argument
 *
 * Return: a ponter to the new string
 */
char *argstostr(int ac, char **av)
{
	char *string;
	int i, j, strlen = 0, t = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		strlen = 0;
		while (av[i][strlen] != '\0')
		{
			strlen++;
		}
		t += strlen + 1;
	}

	string = malloc((t + 1) * sizeof(char));

	if (string == NULL)
		return (NULL);

	strlen = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			string[strlen++] = av[i][j];
		}
		string[strlen++] = '\n';
	}
	string[strlen] = '\0';
	return (string);
}
