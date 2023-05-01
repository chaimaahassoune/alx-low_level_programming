#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t
 * @head: A pointer to the head of the listint_t
 * @index: starting at 0
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *cn = head;

	while (cn != NULL)
	{
		if (c == index)
			return (cn);
		c++;
		cn = cn->next;
	}

	return (NULL);
}
