#include "lists.h"


/**
 * print_list - function that prints all the elements of a list_t
 *
 * @h: the list.
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		node++;
		h = h->next;
	}
	return (node);
}
