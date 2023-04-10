#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint_end - initializes prototype
 * @head: list to modify
 * @n: value to add
 * Description: takes a list and a value and adds a new node in next
 * Return: address to add_next
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add_next, *last_node;

	add_next = malloc(sizeof(dlistint_t));
	if (add_next == NULL)
		return (NULL);
	add_next->n = n;
	if (*head == NULL)
	{
		add_next->next = NULL;
		*head = add_next;
		return (add_next);
	}
	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = add_next;
	add_next->next = NULL;
	return (add_next);
}
