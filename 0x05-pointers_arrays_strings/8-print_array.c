#include "main.h"
#include <stdio.h>

/**
 * print_array - print numbers 0-9 except 2 and 4
 * @a: pointer
 * @n: number of array elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n",a[i]);
}
