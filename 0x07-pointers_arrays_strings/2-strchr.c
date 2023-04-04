#include "main.h"
#include <stdio.h>

/**
 *_strchr - Locates the first occurrence of the character c in the string s
 *
 * @s: A pointer to the string to search
 * @c: The character to locate
 *
 * Return A pointer to the first occurrence of the character c in the string s
 */
char* _strchr(char* s, char c)
{ 
    
    while (*s != '\0') 
    {
        if (*s == c)
        {
            return s;
        }
        s++;
    }
    
    if (c == '\0') 
    {
        return s;
    }
    
    return NULL;
}
