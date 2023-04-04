#include "main.h"
/**
 * Searches the string haystack for the first occurrence of the substring needle.
 * @param haystack A pointer to the string to search.
 * @param needle A pointer to the substring to search for.
 * @return A pointer to the beginning of the located substring in haystack,
 *         or NULL if the substring is not found.
 */
char* _strstr(char* haystack, char* needle) {
    char* p = haystack;
    char* q = needle;

    while (*p != '\0') {
        if (*q == '\0') {
            return haystack; // needle found
        }

        if (*p == *q) {
            q++;
        } else {
            p -= q - needle; // backtrack
            q = needle;
        }

        p++;
    }

    return (*q == '\0') ? haystack : NULL;
}
