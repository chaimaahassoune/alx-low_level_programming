#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate memory for an array
 * @nmemb: Number of elements
 * @size: the size
 *
 * Return: pointer or null on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tab;
	unsigned int i, k;

	k = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	tab = malloc(k);

	if (tab == NULL)
		return (NULL);

	for (i = 0; i < k; i++)
		tab[i] = 0;

	return ((void *)tab);
}
