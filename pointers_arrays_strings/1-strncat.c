#include <string.h>
#include "main.h"
/**
 * _strncat - appends a string to another depending on bytes given
 * Return: pointer to dest
 */
/**
 * @dest: first string to append to
 */
/**
 * @src: last string to be appended
 */
/**
 * @n: bytes to limit append
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, tmp;

	for (i = 0; i < n && i != '\0'; i++)
	{
		if (i < n)
			tmp = '\0';
		tmp = src[i];
		*dest = tmp;
	}
	return (dest);
}
