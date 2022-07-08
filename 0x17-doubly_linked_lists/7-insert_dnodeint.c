#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node at index idx
 * @h: pointer to first node
 * @idx: index
 * @n: data
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *tmp2;
	unsigned int num;

	tmp = NULL;
	if (idx == 0)
		tmp = add_dnodeint(h, n);
	else
	{
		tmp2 = *h;
		num = 1;
		if (tmp2 != NULL)
			while (tmp2->prev != NULL)
				tmp2 = tmp2->prev;
		while (tmp2 != NULL)
		{
			if (num == idx)
			{
				if (tmp2->next == NULL)
					tmp = add_dnodeint_end(h, n);
				else
				{
					tmp = malloc(sizeof(dlistint_t));
					if (tmp != NULL)
					{
						tmp->n = n;
						tmp->next = tmp2->next;
						tmp->prev = tmp2;
						tmp2->next->prev = tmp;
						tmp2->next = tmp;
					}
				}
				break;
			}
			tmp2 = tmp2->next;
			num++;
		}
	}

	return (tmp);
}
