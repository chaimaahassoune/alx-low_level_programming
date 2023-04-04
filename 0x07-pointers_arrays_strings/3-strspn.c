#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the bytes to search for
 *
 * Return: the number of bytes in the initial segment of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int found = 1;

    /* Iterate over each character in s until we find one that's not in accept */
    while (*s && found)
    {
        found = 0;
        /* Iterate over each character in accept and compare it to the current character in s */
        for (char *a = accept; *a; a++)
        {
            if (*s == *a)
            {
                count++;
                found = 1;
                break;
            }
        }
        s++;
    }

    return count;
}
