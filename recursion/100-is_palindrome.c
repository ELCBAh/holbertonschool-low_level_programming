#include "main.h"
/**
 * is_palindrome - checks string if is a palindrome
 * Return: 1 if true 0 if false
 */
/**
 * @s: string to check
 */
int is_palindrome(char *s)
{
	if (*s != '\n')
	{
		if (s == (s + 1))
			return (1);
		else if (s != (s + 1))
			return (0);
	}
	return (2);
}
