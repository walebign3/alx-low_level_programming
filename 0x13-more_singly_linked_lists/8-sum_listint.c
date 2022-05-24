#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - summation of datas
 * @head: Pointer to first node
 *
 * Return: dummation of data
 */
int sum_listint(listint_t *head)
{
	int x = 0;

	while (head != NULL)
	{
		x = x + head->n;
		head = head->next;
	}
	return (x);
}
