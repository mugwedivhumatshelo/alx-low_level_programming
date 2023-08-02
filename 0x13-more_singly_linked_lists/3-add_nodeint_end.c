#include "lists.h"
/**
 * add_nodeint_end -adds a new node at the end of a listint_t list.
 * @head: points to the first element in list.
 * @n: Get data to insert in new element.
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *f;
	listint_t *temp = *head;

	f = malloc(sizeof(listint_t));
	if (!f)
		return (NULL);

	f->n = n;
	f->next = NULL;

	if (*head == NULL)
	{
		*head = f;
		return (f);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = f;

	return (f);
}
