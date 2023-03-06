#include <stdio.h>
#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *
 * Return: s pointer
 */
/**
 * @s: bytes of the memory
 */
/**
 * @b: constant byte
 */
/**
 * @n: first n bytes of the memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; *s != '\0' && i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
