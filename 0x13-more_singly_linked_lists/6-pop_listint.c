#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: the head's node data (n), or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *cn;
	int n;

	if (*head == NULL)
		return (0);
	cn = *head;
	*head = (*head)->next;
	n = cn->n;
	free(cn);

	return (n);
}
