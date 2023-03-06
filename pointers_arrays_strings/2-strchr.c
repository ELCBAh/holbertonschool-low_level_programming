#include "main.h"
/**
 * _strchr - locates a chr in a string
 *
 * Return: first ocurrence of c, or NULL if chr not found
 */
/**
 * @s: string to look in
 */
/**
 * @c: character to look for
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		if (s[i] == c)
			return (s);
		else
			return ('\0');
	}
	return (s);
}
