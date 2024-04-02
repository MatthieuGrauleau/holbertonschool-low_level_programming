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
	const list_t *current = h;
	size_t node = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
			node++;
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
			node++;
		}
		current = current->next;
	}
	return (node);
}
