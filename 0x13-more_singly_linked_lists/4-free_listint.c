#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free from memory
 * @head: pointer to struct
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
