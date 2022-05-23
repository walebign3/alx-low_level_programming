#include <stdio.h>
#include "lists.h"

/**
 * h - pointer to struct
 *
 */

size_t print_listint(const listint_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		printf("%d\n", h -> n);
		x++;
		h = h -> next;
	}
	return (x);
}
