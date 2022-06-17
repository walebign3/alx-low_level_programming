#include "lists.h"

/**
 * add_node - insert node at the begining of node lists
 * @head: pointer to first node
 * @str: data
 *
 * Return: address of inserted node or null
 */

list_t *add_node(list_t **head, const char *str)
{
	int ln;
	char *buf;
	list_t *nod;

	nod = malloc(sizeof(list_t));
	if (nod == NULL)
		return (NULL);
	buf = strdup(str);
	if (buf == NULL)
	{
		free(buf);
		return (NULL);
	}
	for (ln = 0; str[ln];)
		ln++;
	nod->str = buf;
	nod->len = ln;
	nod->next = *head;
	*head = nod;
	return (nod);
}
