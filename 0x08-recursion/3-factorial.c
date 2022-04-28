#include "main.h"

/**
 * factorial - print numbers 0-9 except 2 and 4
 * @n: pointer
 *
 * Return: void
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
