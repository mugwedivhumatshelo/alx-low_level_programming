#include "lists.h"

/**
 * listint_len -that return the number of elements in a linked list.
 * @h: Linked list of the type listint_t to traversal.
 *
 * Return:The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t m = 0;

	while (h)
	{
		m++;
		h = h->next;
	}

	return (m);
}
