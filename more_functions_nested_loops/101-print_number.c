#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"
/**
 * print_number - defines prototype
 * Description: Prints every number and digits
 * Return: Void
 */
/**
 * @n: takes number to print
 */
void print_number(int n)
{
	int i;

	if (n != 0)
	{
		for (i = 0; n != 0; i++)
		{
			if (n < 0)
				_putchar('-');
			_putchar(abs(n) % 10 + '0');
			n = abs(n) / 10;
		}
	}
	else
		_putchar('0');
}
