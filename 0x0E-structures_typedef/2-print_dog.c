#include <stdio.h>
#include "dog.h"
#include <stdio.h>


/**
 * print_dog - prints the struct dog
 *
 * @d: pointer to the dog struct to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", name, d->age, owner);
}

