#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - converts bin to unsigned int
* @b: pointer to char
*
* Return: returns unsigned int or zero
**/

unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int len = 0;

	if (!b)
		return (0);

	for (n = 0; b[n] != '\0'; n++)
	{
		len <<= 1;
		if (b[n] == '1')
			len += 1;
		else
		{
			if (b[n] != '0' && b[n] != '1')
			return (0);
		}
	}
	return (len);
}
