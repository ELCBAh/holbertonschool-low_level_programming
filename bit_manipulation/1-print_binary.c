#include <stdio.h>
#include "main.h"
/**
 * print_binary - initializes prototype
 * @n: number to convert
 * Description: takes a number and converts it to binary
 */
void print_binary(unsigned long int n)
{
	int i, b;

	for (i = 31; i >= 0; i--)
	{
		b = n >> i;
		if (b & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
