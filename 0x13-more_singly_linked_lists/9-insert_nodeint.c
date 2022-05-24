#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * x - counter
 * ptr1 - pointer 1
 * ptr2 - pointer 2
 * tmp - pointer 3
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
        listint_t *tmp;
        listint_t *ptr1;
	listint_t *ptr2;
        unsigned int x = 0;
	unsigned int y = 0;

        tmp = malloc(sizeof(listint_t));
	if(tmp == NULL)
		return(NULL);
        ptr1 = *head;
	ptr2 = *head;
	while(ptr1 != NULL)
	{
		x++;
		ptr1 = ptr1->next;
	}
        if(idx > x++)
        {
                return(NULL);
        }
        else
        {
                while(y != idx)
                {
                        y++;
			ptr2 = ptr2->next;
                }
		tmp->n = n;
                tmp->next = ptr2->next;
                ptr2->next = tmp;
                return(tmp);
        }
}