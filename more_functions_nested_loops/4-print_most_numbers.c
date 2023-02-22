#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - function to print zero to nine
 * Description: Prints from zero to nine except two and four
 * Return: Empty
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		if (i == 2 || i == 4)
		else
			_putchar(i + '0');
	_putchar('\n');
}
