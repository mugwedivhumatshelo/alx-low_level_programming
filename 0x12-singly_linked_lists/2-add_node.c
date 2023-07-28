#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds new node at the beginning of linked list.
 * @head: Double pointer to the list_t list.
 * @str: New string to add to the node.
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nw;
	unsigned int len = 0;

	while (str[len])
		len++;

	nw = malloc(sizeof(list_t));
	if (!nw)
		return (NULL);

	nw->str = strdup(str);
	nw->len = len;
	nw->next = (*head);
	(*head) = nw;

	return (*head);
}
