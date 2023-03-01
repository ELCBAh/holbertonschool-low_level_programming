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
	int len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
