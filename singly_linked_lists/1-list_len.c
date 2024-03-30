#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 *
 * @h: the list
 *
 * Return: the number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
