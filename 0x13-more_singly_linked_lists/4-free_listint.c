#include "lists.h"

/**
 * free_listint - it  Frees listint_t
 * @head: A pointer to the head of  listint_t 
 *
 * Return: Always void.
 */
void free_listint(listint_t *head)
{
	listint_t *cn;

	while (head != NULL)
	{
		cn = head;
		head = head->next;
		free(cn);
	}
}
