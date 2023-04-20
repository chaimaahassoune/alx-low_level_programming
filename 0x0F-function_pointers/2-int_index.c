#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to the function
 *
 * Return: index of the first element for which the cmp function does not
 * return 0, or -1 if it don't find the element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int p;


	if (array && cmp && size > 0)
	{
		for (p = 0; p < size; p++)
		{
			if (cmp(array[p]) != 0)
			{
				return (p);
			}
		}
	}

	return (-1);
}
