#include "main.h"

/**
 * _abs - print absolute value
 * @n: return integer
 * Description: print_absolute value.
 * Return: absolute value.
 */
int _abs(int n)
{
	if (n < 1)
	{
		n = -n;
		return (n);
	}
	return (n);
}
