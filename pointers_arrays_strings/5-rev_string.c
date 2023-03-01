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
	char cache;

	while (i < maxL)
	{
		cache = s[i];
		s[i] = s[maxL];
		s[i] = cache;
		i++;
		maxL--;
	}
}
