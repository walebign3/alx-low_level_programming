#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer to first node
 *
 */

void free_list(list_t *head)
{
	list_t *nd;

	while (head)
	{
		nd = head->next;
		free(head->str);
		free(head);
		head = nd;
	}
}
