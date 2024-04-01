#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of the list.
 *
 * @head: head of the list
 * @n: integer
 *
 * Return: the adress of the new element or null if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		(*head)->
