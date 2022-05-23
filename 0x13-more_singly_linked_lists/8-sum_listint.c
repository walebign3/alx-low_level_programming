#include <stdio.h>
#include "lists.h"

/**
 * x - counter
 *
 */

int sum_listint(listint_t *head)
{
	int x = 0;
	if(head == NULL)
		return(0);
	else
	{
		while (head != NULL)
        	{
			x = x + head->n;
			head = head -> next;
		}
		return (x);
	}
}
