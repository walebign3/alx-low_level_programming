#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - detect list loop
 * @head: pointer to first node
 *
 * Return: loop node or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr1 = head;
	listint_t *ptr2 = head;

	while (ptr1 && ptr2 && ptr2->next)
	{
		ptr1 = ptr2->next;
		ptr1 = ptr2->next->next;
		if (ptr1 == ptr2)
		{
			ptr1 = ptr2;
			break;
		}
	}
	if (!ptr1 || !ptr2 || !ptr2->next)
		return (NULL);
	while (ptr1 != ptr2)
	{
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}
	return (ptr2);
}
