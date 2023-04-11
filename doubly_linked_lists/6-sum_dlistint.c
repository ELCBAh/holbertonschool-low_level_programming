#include <stddef.h>
#include "lists.h"
/**
 * sum_dlistint - initiliazes prototype
 * @head: list
 * Description: takes a list and sums n values
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
