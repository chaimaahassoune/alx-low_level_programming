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
	listint_t *current = head;

	while (current != NULL && current->next != head)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		c++;
	}


	if (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		c++
	}

	return (c);
}

