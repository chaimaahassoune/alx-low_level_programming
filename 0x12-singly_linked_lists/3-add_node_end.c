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

	while (str[ln])
		ln++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = ln;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (t->next)
		t = t->next;

	t->next = n;

	return (n);
}
