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

	if (!head || !*head)
		return (0);
	while (*head)
	{
		d = *head - (*head)->next;

		if (d > 0)
		{
			current = (*head)->next;
			free(*head);
			*head = current;
			c++;
		}
		else
		{
			free(*head);
			*head = NULL;
			c++;
			break;
		}
	}
	*head = NULL;
	return (c);
}

