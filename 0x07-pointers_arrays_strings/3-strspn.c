#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: input string
 * @accept: prefix string
 *
 * Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
    int i, j, count = 0;

    for (i = 0; accept[i] != '\0'; i++)
    {
        for (j = 0; s[j] != '\0'; j++)
        {
            if (accept[i] == s[j])
            {
                count++;
                break;
            }
        }
    }

    return count;
}
