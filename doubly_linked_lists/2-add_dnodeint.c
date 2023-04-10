#include <stdlib.h>
#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add_prev;

	if (head == NULL)
		return (NULL);
	add_prev = malloc(sizeof(dlistint_t));
	if (add_prev == NULL)
		return (NULL);
	add_prev->n = n;
	add_prev->prev = NULL;
	add_prev->next = *head;
	if (*head != NULL)
		(*head)->prev = add_prev;
	*head = add_prev;
	return (add_prev);
}
