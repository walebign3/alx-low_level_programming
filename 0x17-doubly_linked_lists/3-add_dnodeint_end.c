#include<stdlib.h>
#include<stdio.h>
#include"lists.h"
/**
 * add_dnodeint_end - insert node at the last
 * @head: first node
 * @n: data to be inserted
 *
 * Return: the address of the new element,
 * or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *tmp2;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}
	tmp->n = n;
	tmp->next = NULL;
	if((*head) == NULL)
	{
		*head = tmp;
		tmp->prev = NULL;
		return (tmp);
	}
	tmp2 = *head;
	while (tmp2->next != NULL)
	{
		tmp2 = tmp2->next;
	}
	tmp2->next = tmp;
	tmp->prev = tmp2;
	return (*head);
}
