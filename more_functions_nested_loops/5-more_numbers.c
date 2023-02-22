#include <stdio.h>
#include "main.h"
/**
 * more_numbers - function to print zero to nine
 * Description: Prints from zero to nine
 * Return: Empty
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar((i / 10) + '0')
			if (i >= 10)
				_putchar((i % 10) + '0')
		}
		_putchar('\n');
	}
}
