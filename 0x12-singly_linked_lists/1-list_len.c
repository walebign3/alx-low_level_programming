#include "lists.h"

/**
 * list_len - search nuber of nodes
 * @h: pointer to nodes
 *
 * Return: quantity
*/
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
