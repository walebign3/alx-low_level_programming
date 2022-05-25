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
	unsigned int x = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);

		}
		ptr = ptr->next;
		x++;
	}
	return (x);
}
