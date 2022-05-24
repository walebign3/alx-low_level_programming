#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * 9-insert_nodeint.c - insert nodes
 * @n - data
 * @idx - index
 * @head - pointer to first node
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
        listint_t *tmp;
        listint_t *ptr1;
	listint_t *ptr2;
        unsigned int x = 0;

	if (head == NULL)
		return (NULL);
	tmp = malloc(sizeof(listint_t));
	if(tmp == NULL)
		return(NULL);
	ptr1 = *head;
	ptr2 = *head;
	while(ptr1 != NULL)
	{
		x++;
		ptr1 = ptr1->next;
	}
	if(idx > x++)
	{
		return(NULL);
	}
	else
	{
		while(--idx)
		{
			ptr2 = ptr2->next;
		}
		tmp->n = n;
		tmp->next = ptr2->next;
		ptr2->next = tmp;
		return(tmp);
	}
}
