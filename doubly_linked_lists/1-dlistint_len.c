#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements.
 *
 * @h: header of the list.
 *
 * Return: the number of node.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
