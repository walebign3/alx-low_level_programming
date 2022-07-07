#include<stdlib.h>
#include<stdio.h>
#include"lists.h"
/**
 * add_dnodeint - insert node at the first
 * @head: first node
 * @n: data to be inserted
 *
 * Return: the address of the new element,
 * or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	tmp->n = n;
	tmp->next = *head;
	tmp->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = tmp;
	}
	*head = tmp;
	return (*head);
}
