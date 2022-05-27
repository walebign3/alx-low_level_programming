#include "main.h"

/**
* clear_bit - set bit 0 at index
* @n: is unsigned long int
* @index: index
*
* Return: return 1 when bit is 1 else 0.
**/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 0;

	if (index > (sizeof(index) * 8))
	return (-1);
	x = (1 << index);
	*n = *n & ~x;
	return (1);
}
