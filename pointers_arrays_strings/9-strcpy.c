#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcpy - copy from read only src to dest
 *
 * Return: the pointer to dest
 */
/**
 * @dest: where to copy
 */
/**
 * @src: where to get it from
 */
char *_strcpy(char *dest, char *src)
{
	int tmp, i;
	char len = strlen(src);

	for (i = 0; i < len; i++)
	{
		tmp = src[i];
		dest[i] = tmp;
	}
	return (dest + '\0');
}
