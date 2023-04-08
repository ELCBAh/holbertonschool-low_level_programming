#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * list_len - Returns the number of lements
 * @h: List pointer
 * Description: Returns number of all the elements inside a list_t list
 * Return: bytes
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
