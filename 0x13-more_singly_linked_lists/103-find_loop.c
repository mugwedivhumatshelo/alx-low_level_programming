#include "lists.h"
/**
 * find_listint_loop -a function that finds the loop in a linked list.
 * @head: a linked list to be found.
 * Return: The address of node where loop starts, or NULL if no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *w = head;
	listint_t *v = head;

	if (!head)
		return (NULL);

	while (w && v && v->next)
	{
		v = v->next->next;
		w = w->next;
		if (v == w)
		{
			w = head;
			while (w != v)
			{
				w = w->next;
				v = v->next;
			}
			return (v);
		}
	}

	return (NULL);
}
