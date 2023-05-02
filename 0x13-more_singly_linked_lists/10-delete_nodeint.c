#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node
 * @head: Pointer to the head of the list
 * @index: Index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *f, *s;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		f = *head;
		*head = f->next;
		free(f);
		return (1);
	}

	s = *head;
	f = s->next;
	for (i = 1; f != NULL && i <= index; i++)
	{
		if (i == index)
		{
			s->next = f->next;
			free(f);
			return (1);
		}
		s = f;
		f = f->next;
	}
	return (-1);
}
