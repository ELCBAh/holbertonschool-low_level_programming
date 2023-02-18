#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * jack_bauer - prints 24h
 * Description: prints 24h
 * Return: value
 */
void jack_bauer(void)
{
	int h, m;
	int i;

	for (i = 0; i < 23; i++)
	{
		for (i = 0; i < 59; i++)
		{
			while (m < 59)
			{
				if (m < 59)
				{
					m++;
					putchar((h / 10) - '0');
					putchar((h % 10) + '0');
					putchar(':');
					putchar((m / 10) - '0');
					putchar((m % 10) + '0');
					putchar('\n');
				}
			}
			while (m == 59 && h < 23)
			{
				h++;
				m = 0;
			}
		}
	}
}
