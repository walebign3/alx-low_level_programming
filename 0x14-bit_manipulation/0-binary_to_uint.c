#include <stdio.h>
#include "main.h"

/**
 * Len - Gives the length of a string.
 * @bin_num: String to evaluate.
 *
 * Return: The length of the given string.
 */

int len(char *bin_num)
{
	unsigned int i = 0;

	while (bin_num[i] != '\0')
		i++;
	return (i);
}

/**
 * binary_to_uint - convert bin to unsigned int
 * @b: pointer to string
 *
 * Return: decimal number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 1;
	unsigned int num = 0;
	int l;

	if (!b)
		return (0);
	l = len((char *)b);
	while (l--)
	{
		if (b[l] > '1' || b[l] < '0')
			return (0);
		num += (b[l] - '0') * x;
		x *= 2;
	}
	return (num);
}
