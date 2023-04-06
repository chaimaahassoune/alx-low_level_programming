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
<<<<<<< HEAD
	} 


	if (*s != '\0')
		_putchar(*s);


=======
	}
        
	if (*s != '\0')
	       _putchar(*s);
>>>>>>> 44b65c15a845123ba11b9fb9484233ca817a4a1c
	
	_puts_recursion(s + 1);
}
