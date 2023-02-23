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

	for (i = 0; i < n; i++)
	{
		_putchar(92);
		_putchar(' ');
	}
}
