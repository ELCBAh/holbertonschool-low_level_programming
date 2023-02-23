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
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0) /* filters mul of three and five */
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		if ((i % 3) == 0) /* filters mul of three */
		{
			printf("Fizz");
			putchar(' ');
		}
		if ((i % 5) == 0) /* filters mul of five */
		{
			printf("Buzz");
			putchar(' ');
		}
		if (i > 99)
		{
			putchar((i / 100) + '0');
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
		}
		if (i > 9)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
		}
		else if (i < 10 && i > 0)
		{
			putchar((i % 10) + '0');
			putchar(' ');
		}
	}
}
