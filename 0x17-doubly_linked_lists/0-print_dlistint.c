#include<stdio.h>
#include"lists.h"

/**
 * print_dlistint - check the code
 * @h: pointer to first node
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t l = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		l++;
	}
	return (l);
}
