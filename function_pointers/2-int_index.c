#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - init prot
 * @array: given array
 * @size: given array size
 * @cmp: function to pass array values
 * Description: takes an array and process it through a function
 * Return: -1 if fails or index of first true
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 0, i, *iA, flag = 0;

	if (array == NULL || size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	iA = malloc(sizeof(int) * size);
	if (iA == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			iA[j] = i;
			j++;
		}
		else
			flag++;
	}
	if (flag == size)
	{
		free(iA);
		return (-1);
	}
	i = iA[0];
	free(iA);
	return (i);
}
