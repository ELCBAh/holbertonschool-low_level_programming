#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - init prototype
 * Description: allocates memory using malloc
 * Return: NULL if fails or pointer to the alloc mem
 */
/**
 * @b: size of bytes
 */
void *malloc_checked(unsigned int b)
{
	if (b == 0)
	{
		return (NULL);
	}
	else
	{
		int *buff = (int *)malloc(b);
		if (buff == NULL)
			return (NULL);
		else
			return (buff);
		free (buff);
	}
}
