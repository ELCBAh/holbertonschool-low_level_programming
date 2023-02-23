#include <stdio.h>
#include "main.h"
/**
 * more_numbers - function to print zero to nine
 * Description: Prints from zero to nine
 * Return: Empty
 */
void more_numbers(void)
{
	int i, n;

	for (i = 0; i <= 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
