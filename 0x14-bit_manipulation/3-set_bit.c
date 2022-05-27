#include "main.h"

/**
* set_bit - set 1 at index number
* @n: pointer to int
* @index: index
*
* Return: return 1 success and 0 for failer.
**/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x = 0;

	if (index > (sizeof(index) * 8))
		return (-1);
	x = (1 << index);
	*n = *n | m;
	return (1);
}
