#include "dog.h"

/**
 * new_dog - function that creates a new dog
 *
 * @name: char
 * @age: float
 * @owner: char
 *
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a;
	int i = 0, j = 0, b;

	while (name[i])
	{
		i++;
	}
	while (owner[j])
	{
		j++;
	}

	a = malloc(sizeof(dog_t));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	a->name = malloc(sizeof(a->name) * i);
	a->age = age;
	a->owner = malloc(sizeof(a->owner) * j);
	if (a->name == NULL || a->owner == NULL)
	{
		free(a);
		free(a->name);
		free(a->owner);
		return (NULL);
	}
	for (b = 0; b <= i; b++)
	{
		a->name[b] = name[b];
	}
	a->age = age;
	for (b = 0; b <= j; b++)
	{
		a->owner[b] = owner[b];
	}
	return (a);
}

