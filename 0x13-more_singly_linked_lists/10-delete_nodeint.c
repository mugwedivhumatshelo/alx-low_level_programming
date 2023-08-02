#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at  linked list of certain index.
 * @head: Pointer to a first element in alist.
 * @index: index of node to be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p = *head;
	listint_t *pt = NULL;
	unsigned int v = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(p);
		return (1);
	}

	while (v < index - 1)
	{
		if (!p || !(p->next))
			return (-1);
		p = p->next;
		v++;
	}


	pt = p->next;
	p->next = pt->next;
	free(pt);

	return (1);
}
