#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add nodes at ends
 * @head: pointer to first node
 * @n: data
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	if(*head == NULL)
	{
		*head = tmp;
		return (tmp);
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
	return (tmp);
}
