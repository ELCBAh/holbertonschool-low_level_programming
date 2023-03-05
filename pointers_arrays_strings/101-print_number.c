#include <stdio.h>
#include "main.h"
/**
 * print_number - print number using putchar
 *
 * Return: empty
 */
/**
 * @n: int to print
 */
void print_number(int n)
{
	int i;
	int *p;

	p = &n;
	i = 0;
	while (p[i] != '\0')
	{
		_putchar(p[i]);
		i++;
	}
	_putchar('\n');
}
