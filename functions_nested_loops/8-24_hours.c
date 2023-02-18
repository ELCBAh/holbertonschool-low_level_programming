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
					int fh = h / 10;
					int sh = h % 10;
					int fm = m / 10;
					int sm = m % 10;

					m++;
					_putchar(fh + '0');
					_putchar(sh + '0');
					_putchar(':');
					_putchar(fm + '0');
					_putchar(sm + '0');
					_putchar('\n');
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
