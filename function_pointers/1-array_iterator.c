#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - init prot
 * @array: array to be passed to the function callback
 * @size: size of the array
 * @action: function to callback
 * Description: takes an array of int and passess it to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	int *b;

	if (action == NULL)
		return;
	if (size <= 0)
		return;
	b = malloc(sizeof(int) * size);
	if (b == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
	free(b);
}
