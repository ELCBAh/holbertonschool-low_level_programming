#include <stdlib.h>
#include "main.h"
/**
 * _realloc - init prot
 * @ptr: old pointer
 * @old_size: old size of last pointer
 * @new_size: size to replace
 * Description: reassign size
 * Return: new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *b;

	if (ptr == NULL)
		b = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	b = malloc(new_size);
	b = ptr;
	if (b == NULL)
		return (NULL);
	free(ptr);
	return (b);
}
