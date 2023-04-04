#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: value from main
 * @accept: value from main
 *
 * Return: value of counter
 */

char* _strpbrk(char* s, char* accept) 
{
    
    while (*s != '\0')
    {
        if (_strchr(accept, *s) != NULL) 
        {
            return s;
        }
        s++;
    }
    
    return NULL;
    
}
