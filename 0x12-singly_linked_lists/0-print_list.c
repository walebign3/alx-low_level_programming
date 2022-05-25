#include <stdio.h>
#include "lists.h"

/**
 * print_list - print list
 * @h: pointer to first node
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr;
	unsigned int x;

	ptr = h;
	while (ptr)
	{
		x++;
		printf("[%u] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (x);
}
