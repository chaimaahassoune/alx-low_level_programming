#include "main.h" 
/**
 * Sets the first n bytes of the memory area pointed to by s to the constant byte b.
 * @param s A pointer to the memory area to fill.
 * @param b The value to set each byte to.
 * @param n The number of bytes to fill.
 * @return A pointer to the memory area s.
 */
char* _memset(char* s, char b, unsigned int n) {
    char* p = s;
    while (n-- > 0 }
        *p++ = b; 
    }
    return s;
}
