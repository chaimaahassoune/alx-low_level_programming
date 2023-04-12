#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * create_array - create an array of characters
 * @size: the size of the array
 * @c: the char to initialize the array with
 *
 * Return: it return a pointer to the array on sucess or null on failure
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *tab;


	if (size == 0)
	{
		return (NULL);
	}

	tab = malloc(size * sizeof(char));


	if (tab == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < size; i++)
	{
		tab[i] = c;
	}
	return (tab);
}
