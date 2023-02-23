#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - Defines protype
 * Description: Prints diagonal lines
 * Return: Empty
 */
/**
 * @n: Number of lines
 */
void print_diagonal(int n)
{
	int i;
	int s;

	for (i = 0; i < n; i++)
	{
		_putchar(92);
		if (i > 0)
		{
			for (s = 0; s <= i; s++)
				_putchar(' ');
		}
		else
			_putchar('\n');
	}
}
