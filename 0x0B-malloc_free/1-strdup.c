#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer
 * @str: the string to be duplicated
 *
 * Return: a pointer to the duplicated string or null on failure
 */
char *_strdup(char *str)
{
	char *newstr;
	int i, strlen;

	if (str == NULL)
	{
		return (NULL);
	}
	for (strlen = 0; str[strlen] != '\0'; strlen++)
	{
		continue;
	}

	newstr = malloc(strlen + 1);

	if (newstr == NULL)
		return (NULL);

	for (i = 0; i < strlen; i++)
	{
		newstr[i] = str[i];
	}

	newstr[strlen] = '\0';

	return (newstr);
}
