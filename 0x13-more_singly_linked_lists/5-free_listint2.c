#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * function
 */

void free_listint2(listint_t **head)
{
	free(*head);
	*head = NULL;
}
