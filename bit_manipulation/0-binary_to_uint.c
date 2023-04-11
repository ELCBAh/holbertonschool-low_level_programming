#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - initializes prototype
 * @b: binary on string type
 * Description: takes a string containing a binary and converts it to uint
 * Return: result or 0 if b is NULL or string is not 0 and 1
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);
	len = strlen(b);
	for (i = 0; i < len; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		result <<= 1;
		result += b[i] - '0';
	}
	return (result);
}
