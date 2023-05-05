#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number string
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int p;


	if (b == NULL)
		return (0);

	for (p = 0; b[p] != '\0'; p++)
	{
		if (b[p] != '0' && b[p] != '1')
			return (0);

		res <<= 1;
		if (b[p] == '1')
			res += 1;
	}

	return (res);
}
