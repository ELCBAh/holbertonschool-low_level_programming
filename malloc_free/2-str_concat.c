#include <stdlib.h>
#include "main.h"
/**
 * str_concat - init prot
 * Description: Concatenates two strings
 * Return: pointer or NULL on failure
 */
/**
 * @s1: string
 */
/**
 * @s2: second string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, n = 0, j, k = 0;
	char *b1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[n] != '\0')
		n++;
	b1 = malloc(sizeof(char) * (i + n + 1));
	if (b1 == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		b1[j] = s1[k];
		k++;
	}
	for (j = 0; j < n; j++)
	{
		b1[i] = s2[j];
		i++;
	}
	b1[i + n] = '\0';
	return (b1);
}
