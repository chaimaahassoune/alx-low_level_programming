#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end
 * @head: A pointer to a pointer to the head of listint_t
 * @n: The integer to be stored in the new node.
 *
 * Return: If the function fails - NULL or a pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_n, *cn;

	if (head == NULL)
		return (NULL);

	new_n = malloc(sizeof(listint_t));

	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	new_n->next = NULL;


	if (*head == NULL)
	{
		*head = new_n;
	}
	else
	{
		cn = *head;
		while (cn->next != NULL)
			cn = cn->next;
		cn->next = new_n;
	}
	return (new_n);
}
