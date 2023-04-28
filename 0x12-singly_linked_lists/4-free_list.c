#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees a linked list_t
 * @head: list_t
 */
void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
}
