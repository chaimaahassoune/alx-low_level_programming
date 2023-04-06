#include "main.h"

/**
 * _strlen_recursion - give the lenght of a string
 * @s: a pointer to a string
 *
 * Return: The result
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0' )
		return 0;
	else
		return 1 + _strlen_recursion(s + 1);
}
