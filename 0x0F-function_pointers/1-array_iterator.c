#include "function_pointers.h"

/**
 * array_iterator - it executes a function
 * @array: a  pointer
 * @size: yhe array's size
 * @action: pointer to the function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t p;


	if (array && action)
	{
		for (p = 0; p < size; p++)
		{
			action(array[p]);
		}
	}
}

