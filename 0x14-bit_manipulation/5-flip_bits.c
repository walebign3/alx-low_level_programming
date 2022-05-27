#include <stdio.h>
#include "main.h"

/**
* flip_bits - set a bit at index.
* @n: is unsigned long int
* @m: is an unsigned int
*
* Return: return 1 when bit is 1 else 0.
**/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = 0;
	unsigned long int p = n ^ m;
	while (p)
	{
		x += (p & 1);
		(p >>= 1);
	}
	return (x);
}
