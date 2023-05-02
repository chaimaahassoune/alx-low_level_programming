#include "lists.h"
/**
 * find_listint_loop - Finds the start of a loop in a linked list
 * @head: Pointer to the head of the list
 *
 * Return: Address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s = head, *f = head;

	while (f != NULL && f->next != NULL)
	{
		s = s->next;
		f = f->next->next;
		if (s == f)
		{
			s = head;
			/* Loop until slow and fast meet at the start of the loop */
			while (s != f)
			{
				s = s->next;
				f = f->next;
			}
			/* Return the address of the node where the loop starts */
			return (s);
		}
	}
	/* No loop found */
	return (NULL);
}
