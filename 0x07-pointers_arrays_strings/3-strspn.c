#include "main.h"

/**
 * Returns the length of the longest initial substring of s that consists
 * entirely of characters from accept.
 * @param s A pointer to the string to search.
 * @param accept A pointer to the string of characters to accept.
 * @return The length of the longest initial substring of s that consists
 *         entirely of characters from accept.
 */
unsigned int _strspn(char* s, char* accept) {
    unsigned int count = 0;
    while (*s != '\0') {
        if (_strchr(accept, *s) == NULL) {
            break;
        }
        count++;
        s++;
    }
    return count;
}
