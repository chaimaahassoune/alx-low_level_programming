#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a matrix of two D
 * @grid: a pointer to the matrix
 * @height: the hieght of the grid
 *
 * Return : void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
