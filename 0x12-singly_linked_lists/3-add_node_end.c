#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node
 * @head: double pointer to the list_t
 * @str: string
 *
 * Return: it return address of the new element, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *t = *head;
	unsigned int ln = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
