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
	int i;
	/*int len = strlen(s);*/
	char tmp;
	
	for (i = 0; i != '\0'; i++)
	{
		if (*s >= '0' && *s <= '9')
			tmp = s[i];
		else
			continue;
		*s = tmp;
	}
}
