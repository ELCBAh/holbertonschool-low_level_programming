#include <stdio.h>
#include "main.h"
/**
 * print_line - Prints line
 * Description: Prints line
 * Return: Empty
 */
/**
 * @n: Input number of characters to print
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
