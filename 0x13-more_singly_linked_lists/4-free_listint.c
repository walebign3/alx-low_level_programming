#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint: free from memory
 * @head: pointer to struct
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	free(head);
}
