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
	if (*s == '\0')
		return;
	_putchar(*s);
}
