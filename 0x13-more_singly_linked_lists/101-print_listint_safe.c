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
	const listint_t *current_n = NULL;
	const listint_t *last_node = NULL;
	size_t i = 0;
	size_t node;


	current_n = head;
	while (current_n)
	{
		printf("[%p] %d\n", (void *)current_n, current_n->n);
		i++;
		current_n = current_n->next;
		last_node = head;
		node = 0;
	
		while (node < i)
		{
			if (current_n == last_node)
			{
				printf("-> [%p] %d\n", (void *)current_n, current_n->n);
				return (i);
			}
			last_node = last_node->next;
			node++;
		}
		if (!head)
			exit(98);
	}
	return (i);
}
