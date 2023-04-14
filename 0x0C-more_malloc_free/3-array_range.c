#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - allocates an array of integers
 * @min: min values
 * @max: max values
 *
 * Return: pointer or NULL on failure
 */
int *array_range(int min, int max)
{
	int *tab, k, i;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	tab = malloc(k * sizeof(int));

	if (tab == NULL)
		return (NULL);

	for (i = 0; i < k; i++)
		tab[i] = min++;


	return (tab);
}
