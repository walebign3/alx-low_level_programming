#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * head - pointer to struct
 *
 */

void free_listint(listint_t *head)
{
	free(head);
}
