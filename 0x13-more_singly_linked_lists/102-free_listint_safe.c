#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list saftly
 * @h: A pointer to the head of the list to free
 *
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t c = 0;
	listint_t *current;
	int d;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		d = *h - (*h)->next;

		if (d > 0)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
			c++;
		}
		else
		{
			free(*h);
			*h = NULL;
			c++;
			break;
		}
	}
	*h = NULL;
	return (c);
}

