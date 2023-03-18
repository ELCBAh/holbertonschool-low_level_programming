#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - init prot
 * Description: Returns pointer to a 2 dimensional array of int
 * Return: NULL on fail, width, height or 0
 */
/**
 * @width: columns
 */
/**
 * @height: lines
 */
int **alloc_grid(int width, int height)
{
	int **b1;
	
	if (height <= 0)
		return (NULL);
	if (width <= 0)
		return (NULL);
	b1 = malloc(sizeof(int) * (width * height));
	if (b1 == NULL)
		return (NULL);
	return (0);
}
