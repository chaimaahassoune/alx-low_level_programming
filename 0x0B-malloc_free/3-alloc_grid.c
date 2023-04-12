#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - matrix of integers
 *@width: the width of the matrix
 *@height: the height of the matrix
 *
 *Return: pointer to the matrix or null on failure
 */
int **alloc_grid(int width, int height)
{
	int **tab;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	tab = malloc(height * sizeof(int *));

	if (tab == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(width * sizeof(int));

		if (tab[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(tab[j]);
			free(tab);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			tab[i][j] = 0;
	}

	return (tab);
}
