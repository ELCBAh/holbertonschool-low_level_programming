#include <stdio.h>
#include "main.h"
/**
 * main - Initializes program
 * Description: Runs fizz_buzz
 * Return: 0
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
/**
 * fizz_buzz - Initializes prototype
 * Description: Prints fizz for m of three and buzz for m of five
 * Return: empty
 */
void fizz_buzz(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0) /* Check for mul of three and five */
		{
			if ((i % 3) == 0) /* filters mul of three */
			{
				putchar(70);
				putchar(105); /** Fizz */
				putchar(122);
				putchar(122);
			}
			else if ((i % 5) == 0) /* filters mul of five */
			{
				putchar(66);
				putchar(117); /** Buzz */
				putchar(122);
				putchar(122);
			}
		}
		else
		{
			if (i > 99)
				putchar((i / 100) + '0');
			if (i > 9)
				putchar((i / 10) + '0');
			else if (i < 10 && i > 0)
				putchar((i % 10) + '0');
		}
	}
}
