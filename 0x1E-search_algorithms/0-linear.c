#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - searches for a val in an array
 * @array: array
 * @size: size of an array
 * @value: searched value
 *
 * Return: value or -1 if not available
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
