#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * print_list - Takes a list and prints all the elements
 * @h: List pointer
 * Description: Prints all the elements inside a list_t list
 * Return: bytes
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	char *nil = "[0] (nil)";

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("%s", nil);
		else
		{
			printf("[%d] ", h->len);
			printf("%s", h->str);
		}
		h = h->next;
		putchar('\n');
		count++;
	}
	return (count);
}
