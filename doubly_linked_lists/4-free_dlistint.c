#include <stdlib.h>
#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;
	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
