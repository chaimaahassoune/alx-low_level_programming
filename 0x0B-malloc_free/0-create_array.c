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
	if (size == 0)
	{
		return (NULL);
	}

	char *tab = malloc(size * sizeof(char));


	if (tab == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		tab[i] = c;
	}
	return (tab);
}
