#include "main.h"
/**
 * _memcpy - Copies n bytes from the memory area src to the memory area dest
 * @dest : A pointer to the destination memory area
 * @src  : A pointer to the source memory area
 * @n    : The number of bytes to copy
 *
 * return: A pointer to the destination memory area
 */
char* _memcpy(char* dest, char* src, unsigned int n) {
    char* pdest = dest;
    char* psrc = src;
    while (n-- > 0) {
        *pdest++ = *psrc++;
    }
    return dest;
}
