#include <stdio.h>
#include "main.h"
/**
 * print_square - Defines protype
 * Description: Prints square
 * Return: Empty
 */
/**
 * @size: Number of lines
 */
void print_square(int size)
{
	int i, l;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (i = 0; i < size; i++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
