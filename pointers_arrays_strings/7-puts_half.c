#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - prints the second half of string
 *
 * Return: Empty
 */
/**
 * @str: string to print
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);

	for (i = len / 2; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
