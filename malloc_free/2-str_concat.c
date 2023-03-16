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
	int i = 0, n;
	char *b1;

	while (s1[i] != '\0')
		i++;
	for (n = 0; s2[n] != '\0'; n++, i++)
	{
		if (s1[i] != '\0')
			s1[i] = '\0';
		s1[i] = s2[n];
	}
	b1 = malloc(sizeof(char) * i);
	return (b1);
}
