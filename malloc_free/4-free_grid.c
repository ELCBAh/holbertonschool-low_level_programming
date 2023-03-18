#include "main.h"
#include <stdlib.h>
/**
 * free_grid - init prototype
 * Description: frees previous malloc call
 * Return: Empty
 */
/**
 * @grid: grid to free
 */
/**
 * @height: grid height
 */
void free_grid(int **grid, __attribute__((unused)) int height)
{
	free(grid);
}
