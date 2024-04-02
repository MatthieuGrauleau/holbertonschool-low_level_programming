#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list
 *
 * @head: pointer to the start of the list
 * @str: string
 *
 * Return: the adress of the new element or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i, len = 0;
	list_t *new_node = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);
	if(new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (i = 0; str[i] !='\0'; i++)
	{
		len++;
	}
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
