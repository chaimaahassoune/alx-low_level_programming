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
	void *pointer;


	pointer = malloc(b);

	if (pointer == NULL)
		_exit(98);
	return (pointer);
}
