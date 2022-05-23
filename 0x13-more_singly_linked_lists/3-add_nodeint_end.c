#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * tmp - pointer to struct
 * ptr - Pointer to struct
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *ptr;

	tmp = malloc(sizeof(listint_t));
	tmp->n = n;
	tmp->next = NULL;
	if(*head == NULL)
	{
		*head = tmp;
	}
	else
	{
		ptr = *head;
		while(ptr->next!=NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = tmp;
	}
	return (0);
}
