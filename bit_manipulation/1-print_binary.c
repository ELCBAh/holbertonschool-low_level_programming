#include <stdio.h>
#include "main.h"
/**
 * print_binary - initializes prototype
 * @n: number to convert
 * Description: takes a number and converts it to binary
 */
void print_binary(unsigned long int n)
{
	int i, bits, flagOne = 0;

	bits = sizeof(unsigned long int) * 8;
	for (i = bits - 1; i >= 0; i--)
	{
		if (n & (1ul << i))
		{
			flagOne = 1;
			_putchar('1');
		}
		else if (flagOne)
			_putchar('0');
	}
	if (!flagOne)
		_putchar('0');
}
