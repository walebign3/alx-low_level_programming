#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>

/**
 * binary_search - Entry point
 *
 * @array: array
 * @size: size of array
 * @value: value
 *
 * Return: matched value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r;
	size_t m;
	size_t i;

	if (array == NULL)
		return (-1);
	r = size - 1;
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i < r)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");
		m = floor((l + r) / 2);
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
