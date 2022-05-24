#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete node
 * @head: pointer 1
 * @index: pointer 2
 *
 * Return: 1 if succeed & -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr1;
	listint_t *ptr2;
	unsigned int x = 1;

	ptr1 = *head;
	ptr2 = *head;
	if (head == NULL || *head == NULL)
	{
		free (*head);
		return (-1);
	}
	if (ptr1->next == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{

		ptr1 = *head;
		*head = ptr1->next;
		free(ptr1);
	}
	else
	{
		while(index > x)
		{
			ptr2 = ptr1;
			ptr1 = ptr1->next;
			x++;
		}
		ptr2->next = ptr1->next;
		free(ptr1);
	}
	return (1);
}
