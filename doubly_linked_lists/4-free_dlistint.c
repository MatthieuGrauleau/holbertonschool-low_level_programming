#include "lists.h"

/**
 * free_dlistint - function that frees a double linked list.
 *
 * @head: header of the list.
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}
