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
	char *b = NULL;
	int i = 0, n = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	b = malloc(sizeof(char) * (i + 1));
	if (b == NULL)
		return (NULL);
	for (n = 0; n <= i; n++)
		b[n] = str[n];
	return (b);
}
