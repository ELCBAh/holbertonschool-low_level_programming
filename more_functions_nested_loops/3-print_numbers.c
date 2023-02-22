#include <stdio.h>
#include "main.h"
/**
 * print_numbers - function to print zero to nine
 * Description: Prints from zero to nine
 * Return: Empty
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
