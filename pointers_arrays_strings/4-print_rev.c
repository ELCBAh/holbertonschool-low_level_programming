#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - prints str inverted character-wise
 *
 * Return: Empty
 */
/**
 * @s: str to print
 */
void print_rev(char *s)
{
	int i;
	int maxL = strlen(s) -1;

	i = 0;
	while (maxL > i)
	{
		_putchar(s[maxL]);
		maxL--;
	}
	_putchar('\n');
}
