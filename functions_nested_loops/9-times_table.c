#include <stdio.h>
#include "main.h"
/**
 * times_table - function prototype declared
 * Description: Prints every times table from 0 to 9
 * Return: number
 */
void times_table(void)
{
	int i;
	int n;
	int r;

	for (n = 0; n < 9; n++)
	{
		for (i = 0; i < 9; i++)
		{
			_putchar((r = n * i) + 48);
			_putchar(',');
		}
		_putchar('\n');
	}
}
