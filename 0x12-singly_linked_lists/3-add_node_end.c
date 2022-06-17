#include "lists.h"

/**
 * add_node_end - insert node at the end
 * @head: pointer to first node
 * @str: data to be inserted
 *
 * Return: address of node or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ad, *res;
	char *buf;
	int n;

	ad = malloc(sizeof(list_t));
	if (ad == NULL)
		return (NULL);
	buf = strdup(str);
	if (str == NULL)
	{
		free(ad);
		return (NULL);
	}
	for (n = 0; str[n];)
		n++;
	ad->str = buf;
	ad->len = n;
	ad->next = NULL;
	if (*head == NULL)
		*head = ad;
	else
	{
		res = *head;
		while (res->next != NULL)
			res = res->next;
		res->next = ad;
	}
	return (*head);
}
