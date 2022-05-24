#include <stdio.h>
#include "lists.h"

/**
 * print_listint - return number of nodes
 * @h: pointer to struct
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
