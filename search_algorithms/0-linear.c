#include "search_algos.h"
/**
 * linear_search - initializes prototype
 * @array: pointer to first element in array
 * @size: number of elements in the array
 * Description: searches for a value in an array of integers, linear search
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (size--)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i++] == value)
			return (i - 1);
	}

	return (-1);
}