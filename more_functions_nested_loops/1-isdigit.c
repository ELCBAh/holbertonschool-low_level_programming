#include <ctype.h>
#include "main.h"
/**
 * _isdigit - checks digit
 * Description: Checks if digit or not
 * Return: 1 or 0
 */
/**
 * @c: character taken to check
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
