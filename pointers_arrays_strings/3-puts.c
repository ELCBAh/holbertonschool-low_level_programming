#include <stdio.h>
/**
 * _puts - prints str, makes newline and sends it to stdout
 *
 * Return: Empty
 */
/**
 * @str: string to print
 */
void _puts(char *str)
{
	puts(&*str);
}
