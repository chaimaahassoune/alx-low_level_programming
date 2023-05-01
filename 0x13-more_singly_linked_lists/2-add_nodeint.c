#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: double pointer to the list_t
 * @n: the int to be stored in listint_t
 *
 * Return: it return the address of the new element, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_d;

	if (head == NULL)
		return (NULL);

	new_d = malloc(sizeof(listint_t));
	if (new_d == NULL)
		return (NULL);

	new_d->n = n;
	new_d->next = *head;
	*head = new_d;

	return (new_d);
}
