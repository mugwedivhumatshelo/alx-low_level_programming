#include "lists.h"
/**
 * reverse_listint - Reverses the listint_t linked list.
 * @head: Pointer the first node in a list.
 * Return:  a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *v = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = v;
		v = *head;
		*head = next;
	}

	*head = v;

	return (*head);
}
