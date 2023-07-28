#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - aAds new node at the end of linked list.
 * @head: Double pointer to the list_t list.
 * @str: string to put in the new node.
 *
 * Return: Address of a new element or NULL if it fails.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nw;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	nw = malloc(sizeof(list_t));
	if (!nw)
		return (NULL);

	nw->str = strdup(str);
	nw->len = len;
	nw->next = NULL;

	if (*head == NULL)
	{
		*head = nw;
		return (nw);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = nw;

	return (nw);
}
