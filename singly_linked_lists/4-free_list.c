#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees allocated memmory in a list
 * @head: list to be freed
 * Description: takes a list and frees its allocated memmory
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
