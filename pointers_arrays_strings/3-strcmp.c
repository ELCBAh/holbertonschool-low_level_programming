#include <string.h>
#include "main.h"
/**
 * _strcmp - compares two strings
 * Return: less than zero, zero, or greater than zero
 */
/**
 * @s1: string
 */
/**
 * @s2: string
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			return (0);
		else if (s1[i] < s2[i])
			return (-1);
		else
			return (1);
	}
	return(0);
}
