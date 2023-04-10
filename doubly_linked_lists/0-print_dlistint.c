#include <stdio.h>
#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *temp;
	
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
