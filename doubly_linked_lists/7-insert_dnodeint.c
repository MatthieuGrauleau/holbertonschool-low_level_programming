#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given position
 *
 * @h: header of the list.
 * @idx: position to inset the new node.
 * @n: integer for the new node to contain.
 *
 * Return: adress of the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

