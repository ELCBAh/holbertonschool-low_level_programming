#include "main.h"
/**
 * leet - encodes string into 1337
 *
 * Return: string
 */
/**
 * @a: char to take
 */
char *leet(char *a)
{
	int i;

	i = 0;
	while (i < 20)
	{
		if (a[i] == 'a' || a[i] == 'A')
		{
			a[i] = 52;
			i++;
		}
		if (a[i] == 'e' || a[i] == 'E')
		{
			a[i] = 51;
			i++;
		}
		if (a[i] == 'o' || a[i] == 'O')
		{
			a[i] = 48;
			i++;
		}
		if (a[i] == 't' || a[i] == 'T')
		{
			a[i] = 55;
			i++;
		}
		if (a[i] == 'l' || a[i] == 'L')
		{
			a[i] = 49;
			i++;
		}
		else
			continue;
		i++;
	}
	return (a);
}
