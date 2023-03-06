#include "main.h"
/**
 * _puts_recursion - recurse a whole string
 *
 * Return :Empty
 */
/**
 * @s: string
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] != '\0')
		i++;
	_putchar(s[i]);
}
