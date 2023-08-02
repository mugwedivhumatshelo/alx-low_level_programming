#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - print a number of loop,
 * in the looped listint_t linked list.
 * @head: Pointer to head of  listint_t to be checked.
 * Return: the number of nodes in the list.
 * 0r - 0.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *me, *you;
	size_t ns = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	me = head->next;
	you = (head->next)->next;

	while (you)
	{
		if (me == you)
		{
			me = head;
			while (me != you)
			{
				ns++;
				me = me->next;
				you = you->next;
			}

			me = me->next;
			while (me != you)
			{
				ns++;
				me = me->next;
			}

			return (ns);
		}

		me = me->next;
		you = (you->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints the listint_t list a safely.
 * @head: Pointer the head of listint_t list.
 * Return: Number of nodes in a list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t ns, index = 0;

	ns = looped_listint_len(head);

	if (ns == 0)
	{
		for (; head != NULL; ns++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < ns; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (ns);
}
