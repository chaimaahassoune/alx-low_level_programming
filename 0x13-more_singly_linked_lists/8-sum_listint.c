#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * @head: pointer to the head node
 *
 * Return: if the list is empty, return 0 else return the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *cn = head;

	while (cn != NULL)
	{
		sum += cn->n;
		cn = c->next;
	}

	return (sum);
}
