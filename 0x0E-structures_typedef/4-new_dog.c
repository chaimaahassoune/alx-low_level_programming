#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to the new struct, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new;
	int n, o, i;

	dog_new = malloc(sizeof(dog_t));
	if (dog_new == NULL)
		return (NULL);

	for (n = 0; name[n]; n++)
		;
	for (o = 0; owner[o]; o++)
		;

	dog_new->name = malloc(sizeof(char) * (n + 1));
	if (dog_new->name == NULL)
	{
		free(dog_new);
		return (NULL);
	}
	dog_new->owner = malloc(sizeof(char) * (o + 1));
	if (dog_new->owner == NULL)
	{
		free(dog_new->name);
		free(dog_new);
		return (NULL);
	}

	for (i = 0; i <= n; i++)
		dog_new->name[i] = name[i];
	dog_new->age = age;

	for (i = 0; i <= o; i++)
		dog_new->owner[i] = owner[i];

	return (dog_new);
}

