#include "main.h"
#include <stdint.h>

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	union
	{
		uint32_t i;
		char c[4];
	} endian;

	endian.i = 1;
	return ((int)endian.c[0]);
}
