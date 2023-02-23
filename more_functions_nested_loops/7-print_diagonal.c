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
	int s, l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (s = 0; s < l; s++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
