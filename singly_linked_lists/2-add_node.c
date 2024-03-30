#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list
 *
 * @head: start of the list
 * @str: string
 *
 * Return: the adress of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	str->next = *head;
	*head = str;

	return (str->next);
}
