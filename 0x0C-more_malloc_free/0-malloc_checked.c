#include <stdio.h>
#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - allocates memory using malloc
 *@b: the size
 *
 * Return: pointer to the allocated memory or terminate the process
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *pointer;


	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);
	return (pointer);
}
