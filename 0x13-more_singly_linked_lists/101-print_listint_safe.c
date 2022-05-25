#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * memaloc - allocat memory
 * @ptr1: pointer to previous
 * @x: size
 * @ptr2: new node to add to the list
 *
 * Return: pointer to the new list
 */
const listint_t **memaloc(const listint_t **ptr1, size_t x, const listint_t *ptr2)
{
	const listint_t **ptr3;
	size_t m;

	ptr3 = malloc(x * sizeof(listint_t *));
	if (ptr3 == NULL)
	{
		free(ptr1);
		exit(98);
	}
	for (m = 0;  m < x - 1; m++)
		ptr3[m] = ptr1[m];
	ptr3[m] = ptr2;
	free(ptr1);
	return (ptr3);
}

/**
 * print_listint_safe - prints list
 * @head: pointer to first node
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t x, n = 0;
	const listint_t **ptr1 = NULL;

	while (head != NULL)
	{
		for (x = 0; x < n; x++)
		{
			if (head == ptr1[x])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(ptr1);
				return (n);
			}
		}
		n++;
		ptr1 = memaloc(ptr1, n, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(ptr1);
	return (n);
}
