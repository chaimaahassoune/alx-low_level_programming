#include <stdio.h>

/**
 * _strstr - locates a substring within a string
 *
 * @haystack: input string
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        char *begin = haystack;
        char *pattern = needle;

        while (*haystack && *pattern && *haystack == *pattern)
        {
            haystack++;
            pattern++;
        }

        if (!*pattern)
        {
            return begin;
        }

        haystack = begin + 1;
    }

    return NULL;
}
