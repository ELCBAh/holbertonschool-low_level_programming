#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates array of chars and init specific char
 * Return: NULL if size 0 or pointer
 */
/**
 * @size: in bytes
 */
/**
 * @c: char to replace
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *b = (char *)malloc(size);

	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		b[i] = c;
	return (NULL);
}
