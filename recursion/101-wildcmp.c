#include "main.h"
/**
 * wildcmp - compares two strings
 * Return: 1 if identical, 0 if false
 */
/**
 * @s1: string 1
 */
/**
 * @s2: string 2
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 != '\0')
	{
		if (s1 == s2 && s1 == '*')
			return (1);
		if (s1 != s2)
			return (0);
	}
	return (0);

}
