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
	listint_t *tmp;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		c++;

		if (tmp >= *h)
		{
			*h = NULL;
			break;
		}
	}
	return (c);
}

