#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t
 *
 * @head: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *s, *f;
	size_t c = 0;

	if (head == NULL)
		return (0);

	s = f = head;


	while (s && f && f->next)
	{
		s = s->next;
		f = f->next->next;

		if (s == f)
		{
			printf("-> [%p] %d\n", (void *)s, s->n);
			printf("-> [%p] %d\n", (void *)f, f->n);
			printf("-> [%p] %d\n", (void *)f, f->n);
			printf("-> [%p] %d\n", (void *)s->next, s->next->n);
			printf("-> [%p] %d\n", (void *)f->next->next, f->next->next->n);
			printf("Error: loop detected\n");
			exit(98);
		}
		printf("[%p] %d\n", (void *)s, s->n);
		c++;
	}
	printf("[%p] %d\n", (void *)s, s->n);
	c++;
	return (c);
}

