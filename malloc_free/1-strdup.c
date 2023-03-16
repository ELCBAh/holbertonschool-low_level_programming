#include <stdlib.h>
#include "main.h"
/**
 * _strdup - init prototype
 * Description: returns pointer to new space in mem, and string
 * Return: NULL if str == NULL or insufficent mem owise pointer
 */
/**
 * @str: string to dup
 */
char *_strdup(char *str)
{
	char *b;
	unsigned int i;

	b = malloc(sizeof(str));
	for (i = 0; i <= sizeof(str); i++)
		b[i] = str[i];
	if (str == NULL)
		return (NULL);
	return (b);
}
