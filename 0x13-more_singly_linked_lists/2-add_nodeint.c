#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - pointer to struct
 * @n: node pointer
 * @head: pointer to first node
 *
 * Return: return 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	if (head == NULL)
		return (NULL);
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
