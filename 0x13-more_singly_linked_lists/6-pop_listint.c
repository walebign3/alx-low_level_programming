#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - remove nodes
 * @head: pointer to first node
 *
 * Return: node data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int x;

	if (head == NULL || *head == NULL)
		return (0);
	tmp = *head;
	*head = tmp->next;
	x = tmp->n;
	free(tmp);
	return (x);
}
