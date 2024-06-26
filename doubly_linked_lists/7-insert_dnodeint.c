#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a position
 *
 * @h: header of the list.
 * @idx: position to inset the new node.
 * @n: integer for the new node to contain.
 *
 * Return: adress of the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int count = 0;
	dlistint_t *current = *h;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (*h == NULL || idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (NULL);
	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
