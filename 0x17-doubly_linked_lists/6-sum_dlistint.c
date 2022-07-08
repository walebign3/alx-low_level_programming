#include "lists.h"
/**
 * sum_dlistint - function return index node
 * @head: pointer to first node
 *
 * Return: returns the sum of all the data (n) of a
 * dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
