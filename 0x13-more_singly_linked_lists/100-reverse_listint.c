#include "lists.h"
/**
* reverse_listint - Reverses a list
* @head: A pointer to a pointer to the head node of the list.
*
* Return: A pointer to the first node of the reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *f = NULL, *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = f;
		f = *head;
		*head = next;
	}

	*head = f;
	return (*head);
}
