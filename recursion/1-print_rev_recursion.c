#include "main.h"
/**
 * _print_rev_recursion - recurse and reverse a whole string
 *
 * Return :Empty
 */
/**
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
