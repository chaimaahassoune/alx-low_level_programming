#include "main.h"

/**
 * _sqrt_recursion - this fuction calculat the square root of a number
 * @n: the number
 *
 * Return:the square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
	{
		int i = _sqrt_recursion(n / 4) * 2;
		if ((i + 1) * (i + 1) <= n )
			return (i + 1);
		else
			return (i);
	}
}

