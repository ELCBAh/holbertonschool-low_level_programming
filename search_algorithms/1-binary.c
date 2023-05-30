#include "search_algos.h"
/**
 * binary_search - initializes prototype
 * @array: array to iterate through
 * @size: size of array
 * @value: value to search
 * Description: searches for value in array using binary search
 * Return: index of value or -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, final = size - 1, media;

	if (array == NULL)
		return (-1);
	while (i <= final)
	{
		media = floor((i + final) / 2);
		if (array[media] < value)
			i = media + 1;
		else if (array[media] > value)
			final = media - 1;
		else
			return (media);
	}
	return (-1);
}
