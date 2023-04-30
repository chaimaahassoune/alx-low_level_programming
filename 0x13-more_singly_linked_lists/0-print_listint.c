#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t
 * @h: A pointer to the head of the listint_t
 *
 * Return: The number of nodes in listint_t
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}

	return (c);
}
