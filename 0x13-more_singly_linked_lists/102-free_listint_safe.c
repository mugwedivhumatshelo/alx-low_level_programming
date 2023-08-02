#include "lists.h"
/**
 * free_listint_safe -frees lists with a loop.
 * @h: should go though the list only once.
 * Return:  the size of the list that was freed'.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t fr = 0;
	int br;
	listint_t *p;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		br = *h - (*h)->next;
		if (br > 0)
		{
			p = (*h)->next;
			free(*h);
			*h = p;
			fr++;
		}
		else
		{
			free(*h);
			*h = NULL;
			fr++;
			break;
		}
	}

	*h = NULL;

	return (fr);
}
