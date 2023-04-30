#include "lists.h"

/**
 * listint_len - Returns the number of elements
 * @h: A pointer to the head of the listint_t
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}

	return (c);
}
