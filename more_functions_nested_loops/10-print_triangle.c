#include <stdio.h>
#include "main.h"
/**
 * print_triangle - calls for prototype function
 * Description: prints triangle
 * Return - Empty
 */
/**
 * @size: gets triangle size
 */
void print_triangle(int size)
{
	int i;
	int qsign;

	if (size > 0)
	{
		for (qsign = 1; qsign <= size; qsign++)
		{
			for (i = size - qsign; i > 0; i--)
				_putchar(' ');
			for (i = 0; i < qsign; i++)
				_putchar('#');
			if (size == qsign)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
