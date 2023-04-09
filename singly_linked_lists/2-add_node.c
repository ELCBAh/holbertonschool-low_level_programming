#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node
 * @head: contains destination list
 * @str: string to copy
 * Description: creates a new node and copies to str
 * Return: pointer to new node or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
