#include "main.h"
/**
 * _strlen_recursion - gets length of a string
 *
 * Return: length
 */
/**
 * @s: string
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] != '\0')
	{
		i++;
		_strlen_recursion(s);
	}
	return (i);
}
