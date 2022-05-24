#include <stdio.h>
#include "lists.h"

/**
 * listint_len - list nodes
 * @h - pointer to struct
 *
 * Return: list nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		x++;
		h = h -> next;
	}
	return (x);
}
