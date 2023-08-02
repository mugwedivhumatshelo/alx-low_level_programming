#include "lists.h"
/**
 * insert_nodeint_at_index -Adds a new node in the linked lists,
 * in the given position.
 * @head: Pointer to a first node in a list.
 * @idx: Index where a new node is added,.
 * @n: Data to be inserted in a new node.
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int v;
	listint_t *w;
	listint_t *p = *head;

	w = malloc(sizeof(listint_t));
	if (!w || !head)
		return (NULL);

	w->n = n;
	w->next = NULL;

	if (idx == 0)
	{
		w->next = *head;
		*head = w;
		return (w);
	}

	for (v = 0; p && v < idx; v++)
	{
		if (v == idx - 1)
		{
			w->next = p->next;
			p->next = w;
			return (w);
		}
		else
			p = p->next;
	}

	return (NULL);
}
