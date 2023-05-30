#include "search_algos.h"
/**
 * linear_search - initializes prototype
 * @array: pointer to first element in array
 * @size: number of elements in the array
 * @value: value to search
 * Description: searches for a value in an array of integers, linear search
 * Return: index of value or -1 if fails
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (size--)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i++] == value)
			return (i - 1);
	}

	return (-1);
}
