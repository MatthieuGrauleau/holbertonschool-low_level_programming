#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 *
 * @head: start of the list.
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *next = head->next;

		free(head->str);
		free(head);
		head = next;
	}
}
