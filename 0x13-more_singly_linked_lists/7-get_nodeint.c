#include "lists.h"
/**
 * get_nodeint_at_index - Returns a node in a certain index in linked list.
 * @head: First node in linked list.
 * @index: Index of a node to be return.
 * Return: Pointer to a node, that we are looking for or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int f = 0;
	listint_t *p = head;

	while (p && f < index)
	{
		p = p->next;
		f++;
	}

	return (p ? p : NULL);
}
