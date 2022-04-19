#include "main.h"

/**
 * swap_int - print numbers 0-9 except 2 and 4
 * @a: pointer 1
 * @b: pointer 2
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
