/**
 * _memset -Sets the first n bytes of the memory area pointed to by s to the constant byte b.
 *
 * @s: A pointer to the memory area to fill
 * @b: The value to set each byte to.
 * @n: The number of bytes to fill.
 *
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;

	}

	return (s);
}
