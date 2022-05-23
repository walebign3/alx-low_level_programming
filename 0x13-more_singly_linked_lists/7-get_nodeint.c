#include <stdio.h>
#include "lists.h"

/**
 * x - counter
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	while (x != index)
        {
		x++;
		head = head -> next;
	}
	return (head);
}
