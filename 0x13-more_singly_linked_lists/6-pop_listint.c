#include "lists.h"
/**
 * pop_listint -deletes the head node of a listint_t linked list,
 * @head: Pointer to get first element in a linked list.
 * Return: The data inside the elements which were  deleted,
 * or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *p;
	int m;

	if (!head || !*head)
		return (0);

	m = (*head)->n;
	p = (*head)->next;
	free(*head);
	*head = p;

	return (m);
}
