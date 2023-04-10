#include <stdio.h>
#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
