#include "main.h"

/**
 * _puts_recursion - prints a string,followed by a new line
 * @s: pointer to a string
 *
 * Return: It return void 
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	} 


	if (*s != '\0')
		_putchar(*s);



	}
        
	if (*s != '\0')
	       _putchar(*s);
	
	_puts_recursion(s + 1);
}
