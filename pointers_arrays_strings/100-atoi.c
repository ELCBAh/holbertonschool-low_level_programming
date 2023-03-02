#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _atoi - converts a string to integer
 *
 * Return: 1 or 0 in case not int found
 */
/**
 * @s: string to convert
 */
int _atoi(char *s)
{
	int i, val;
	/*int len = strlen(s);*/
	int tmp;

	for (i = 0; i != '\0'; i++)
	{
		val = atoi(s);
		tmp = val;
		*s = tmp;
		if (atoi(s) < 0)
		{
			val = -val;
			return (atoi(s));
		}
		else
			return (0);
	}
	return (atoi(s));
}
