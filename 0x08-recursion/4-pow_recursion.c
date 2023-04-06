#include "main.h"

/**
 * _pow_recursion - calculat the power of a given number
 * @x: the number
 * @y: the power
 *
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x , y - 1));
}
