#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint- binary to unsigned int conversion
 * @b: pointer to binary numbers
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, k = 1;
	int len = 0, c;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
		len++;
	for (c = len-1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
			i += k;
		k *= 2;
	}
	return (i);
}
