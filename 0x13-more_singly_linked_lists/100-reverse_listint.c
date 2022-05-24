#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - reverse nodes
 * @head: pointer1
 *
 * Return: first node pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr1 = NULL;
	listint_t *ptr2 = NULL;

	if (*head == NULL)
		return (*head);
	while (*head)
	{
		ptr2 = (*head)->next;
		(*head)->next = ptr1;
		ptr1 = *head;
		*head = ptr2;
	}
	*head = ptr1;
	return (*head);
}
