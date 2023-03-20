#include <stdlib.h>
#include "main.h"

int *array_range(int min, int max)
{
	int *b, i, size;

	size = max - min + 1;
	if (min > max)
		return (NULL);
	b = malloc(sizeof(int) * size);
	if (b == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		b[i] = min++;
	}
	return (b);
}
