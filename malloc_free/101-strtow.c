#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * strtow - prot init
 * Description: cuts string int words
 * Return: pointer to new words
 */
/**
 * @str: string to chop
 */
char **strtow(char *str)
{
	int i, len;
	char **b;

	len = strlen(str);
	if (str == NULL || *str == '\0')
		return (NULL);
	b = malloc(sizeof(char) * (len + 1));
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			str[i] = '\n';
	}
	str[len] = '\0';
	return (b);
}
