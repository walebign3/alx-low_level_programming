#include <stdio.h>
#include "lists.h"

/**
 * print_listint return number of nodes 
 * @x - pointer to struct
 *
 * return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int x = 0;

	while (h)
	{
		printf("%d\n", h -> n);
		x++;
		h = h -> next;
	}
	return (x);
}
