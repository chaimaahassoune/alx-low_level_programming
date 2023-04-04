/**
 * _memcpy - Copies n bytes from the memory area
 *
 * @dest: A pointer to the destination memory area
 * @src: A pointer to the source memory area
 * @n: The number of bytes to copy
 *
 * Return: A pointer to the destination memory area
 */

char* _memcpy(char* dest, char* src, unsigned int n)
{
    
    char* pdest = dest;
    char* psrc = src;
    
    while (n-- > 0)
    {
        *pdest++ = *psrc++;
    }
    return dest;
}
