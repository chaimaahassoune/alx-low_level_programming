#include "lists.h"


/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head node of a listint_t linked list
 * @idx: index of the list where the new node should be added
 * @n: data to be stored in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_n, *c;
	unsigned int i = 0;


	if (head == NULL)
		return (NULL);

	new_n = malloc(sizeof(listint_t));

	if (new_n == NULL)
		return (NULL);

	new_n->n = n;

	if (idx == 0)
	{
		new_n->next  = *head;
		*head = new_n;
		return (new_n);
	}
	c = *head;
	while (c != NULL)
	{
		if (i == idx - 1)
		{
			new_n->next = c->next;
			c->next = new_n;
			return (new_n);
		}
		c = c->next;
		i++;
	}
	free(new_n);
	return (NULL);
}
