#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get node data at index
 * @head: pointer to first node
 * @index: index
 *
 * Return: get node data pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);
	for (x = 0; x < index; x++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
