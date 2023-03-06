#include "main.h"
/**
 * memset - fills memory with a constant byte
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

	i = 0;
	while (*s != '\0')
	{
		for (i = 0;  i < n; i++)
		{
			s[i] = b;
		}
	}
	return (s);
}
