#include <ctype.h>
#include "main.h"
/**
 * _isupper - checks lower case c
 * Description: Checks if lower case or not
 * Return: 1 or 0
 */
/**
 * @c: character taken to check
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
