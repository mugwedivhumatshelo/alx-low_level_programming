#include "lists.h"

/**
 * add_nodeint -Gets a new node in the beginning of listint_t list.
 * @head: points to the first node in the list.
 * @n: Data to insert in the new node.
 * Return: the address of the new element, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *f;

	f = malloc(sizeof(listint_t));
	if (!f)
		return (NULL);

	f->n = n;
	f->next = *head;
	*head = f;

	return (f);
}
