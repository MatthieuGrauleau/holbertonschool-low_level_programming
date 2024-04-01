#include "lists.h"

/**
 * print_dlistint - function that prints al the elements of a dlistin_t list.
 *
 * @h: header of the list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}
