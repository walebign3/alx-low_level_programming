#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - function insert at index idx return address
 * @h: pointer to first node
 * @idx: index
 * @n: data to be inserted
 *
 * Return: void
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int num = 1;
	dlistint_t *tmp, *tmp2;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = NULL;
	tmp2 = *h;
	if (idx == 0)
		add_dnodeint(&tmp2, 0);
	while (tmp2 != NULL)
	{
		if (idx == num)
		{
			tmp->next = tmp2->next;
			tmp->prev = tmp2;
			tmp2->next = tmp;
			if (tmp->next != NULL)
				tmp->next->prev = tmp;
		}
		num++;
		tmp2 = tmp2->next;
	}
	if (idx >= num)
		return (NULL);
	return (tmp);
}
