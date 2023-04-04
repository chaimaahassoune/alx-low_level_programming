#include "main.h"

/**
 * Searches the string s for the first occurrence of any character in the string accept.
 * @param s A pointer to the string to search.
 * @param accept A pointer to the string of characters to search for.
 * @return A pointer to the first occurrence of a character in s that is also in accept,
 *         or NULL if no such character is found.
 */
char* _strpbrk(char* s, char* accept) {
    while (*s != '\0') {
        if (_strchr(accept, *s) != NULL) {
            return s;
        }
        s++;
    }
    return NULL;
}
