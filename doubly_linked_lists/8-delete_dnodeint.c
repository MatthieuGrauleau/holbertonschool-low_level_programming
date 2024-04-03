#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes a node at index
 *
 * @head: pointer of header
 * @index: indew where we want to delete
 *
 * Return: 1 for succeeded and -1 for failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = *head;
	dlistint_t *current = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
		return (-1);

	 current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	 free(current);
	return (1);
}
