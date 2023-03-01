#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts2 - prints every other character
 *
 * Return: Empty
 */
/**
 * @str: string to print only even numbers
 */
void puts2(char *str)
{
	int i;

	while (i < strlen(str))
	{
		if (i != 1 || i % 3 != 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
