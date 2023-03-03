#include <string.h>
#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * Return: pointer to dest
 */
/**
 * @dest: destination string to append
 */
/**
 * @src: string to be appended
 */
char *_strcat(char *dest, char *src)
{
	int i, tmp;

	for (i = 0; i != '\0'; i++)
	{
		tmp = src[i];
		dest = dest + tmp;
	}
	return (dest);
}
