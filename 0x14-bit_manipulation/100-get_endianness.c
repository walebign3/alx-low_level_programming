#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int n = 1;

	char *ch = (char *) &n;
	return ((int)*ch);
}
