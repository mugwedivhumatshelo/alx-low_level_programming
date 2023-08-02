#include "lists.h"
/**
 * sum_listint - Gets the sum of all the data(n) of a listint_t linked list.
 * @head: First node in the linked list.
 * Return: 0 is list is empty.
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *p = head;

	while (p)
	{
		total += p->n;
		p = p->next;
	}

	return (total);
}
