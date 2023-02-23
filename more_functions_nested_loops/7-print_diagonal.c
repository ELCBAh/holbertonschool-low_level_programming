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
	int s;

	if (n > 0)
	{
		for (s; s < n; s++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
	}
	else
		_putchar('\n');
}
