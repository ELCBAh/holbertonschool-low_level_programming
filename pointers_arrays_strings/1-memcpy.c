#include <stdio.h>
#include "main.h"
/**
 * _memcpy - fills memory with a constant byte
 *
 * Return: dest pointer
 */
/**
 * @dest: destination memory area
 */
/**
 * @src: source memory area
 */
/**
 * @n: n bytes of memory from src
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; *src != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
