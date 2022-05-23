#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * tmp - pointer to struct
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;
	*head = tmp->next;
	return(tmp->n);
	free(tmp);
}
