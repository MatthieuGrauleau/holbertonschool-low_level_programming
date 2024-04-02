#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth
 * node of a double linked list.
 *
 * @head: header of the list.
 * @index: the position that we want.
 *
 * Return: the nth node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}

	if (current == NULL)
	{
		return (NULL);
	}
	return (current);
}
