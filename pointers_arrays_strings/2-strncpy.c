#include <string.h>
#include "main.h"
/**
 * _strncpy - copies a string to another depending on bytes given
 * Return: pointer to dest
 */
/**
 * @dest: first string to copy
 */
/**
 * @src: last string to be copied
 */
/**
 * @n: bytes to limit copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char tmp;

	for (i = 0; i <= n && i != '\0'; i++)
	{
		if (i != '\0')
			*dest = '\0';
		tmp = src[i];
		*dest = *dest + tmp;
	}
	return (dest);
}
