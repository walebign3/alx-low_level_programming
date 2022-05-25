#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -  insert node
 * @head: pointer to first node
 * @idx: index
 * @n: data of node
 *
 * Return: pointers
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x = 0;
	listint_t *ptr1;
	listint_t *ptr2;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		ptr1 = *head;
		while (x < idx - 1 && current != NULL)
		{
			x++;
			ptr1 = ptr1->next;
		}
		if (ptr1 == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (ptr2 == NULL)
		return (NULL);
	ptr2->n = n;
	if (idx == 0)
	{
		ptr2->next = *head;
		*head = ptr2;
		return (ptr2);
	}
	ptr2->next = ptr1->next;
	ptr1->next = ptr2;
	return (ptr2);
}
