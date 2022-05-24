#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes nodes at index
 * @head: first pointer to node
 * @index: index
 *
 * Return: address of nodes
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *ptr1;
	listint_t *ptr2;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		ptr2 = (*head)->next;
		free(*head);
		*head = ptr2;
		return (1);
	}
	ptr1 = *head;
	for (x = 0; x < index - 1; x++)
	{
		if (ptr1->next == NULL)
			return (-1);
		ptr1 = ptr1->next;
	}
	ptr2 = ptr1->next;
	ptr1->next = ptr2->next;
	free(next);
	return (1);
}
