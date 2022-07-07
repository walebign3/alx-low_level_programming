#include<stdio.h>
#include"lists.h"
/**
 * dlistint_len - check the code
 * @h: pointer to first node
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t l = 0;

	while (h != NULL)
	{
		h = h->next;
		l++;
	}
	return(l);
}
