#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - prints str inverted character-wise
 *
 * Return: Empty
 */
/**
 * @s: str to print
 */
void rev_string(char *s)
{
	int i;
	int maxL = strlen(s) - 1;
	char *p = &*s;
	char cache;

	while (s[i != '\0'] && s[maxL != '\0'])
	{
		cache = *(p + maxL);
		*(p + maxL) = *(p + i);
		*(p + i) = cache;
	}
}
