#include "lists.h"
/**
 * get_dnodeint_at_index - function return index node
 * @head: pointer to first node
 * @index: index of node
 *
 * Return: returns the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int num = 0;

	while (head != NULL)
	{
		if (num == index)
		{
			return (head);
		}
		head = head->next;
		num++;
	}
	return (NULL);
}
