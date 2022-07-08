#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: pointer to first node
 * @index: index
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *tmp2;
	unsigned int num = 0;

	tmp = *head;
	if (tmp != NULL)
		while (tmp->prev != NULL)
			tmp = tmp->prev;
	while (tmp != NULL)
	{
		if (num == index)
		{
			if (num == 0)
			{
				*head = tmp->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				tmp2->next = tmp->next;
				if (tmp->next != NULL)
					tmp->next->prev = tmp2;
			}

			free(tmp);
			return (1);
		}
		tmp2 = tmp;
		tmp = tmp->next;
		num++;
	}

	return (-1);
}
