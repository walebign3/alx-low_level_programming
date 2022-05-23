#include <stdio.h>
#include "lists.h"

/**
 * h - pointer to struct
 *
 */

size_t listint_len(const listint_t *h)
{
        int x = 0;

        while (h != NULL)
        {
                x++;
                h = h -> next;
        }
        return (x);
}
