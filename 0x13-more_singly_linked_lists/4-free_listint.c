#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: Listint_t list to get freed.
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
