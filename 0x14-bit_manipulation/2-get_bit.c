#include "main.h"

/**
* get_bit - return bit at the index
* @n: is unsigned long int number
* @index: index
*
* Return: return 1 when bit is 1 else 0.
**/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(index) * 8))
		return (-1);
	if ((n >> index) & 1)
		return (1);
	return (0);
}
