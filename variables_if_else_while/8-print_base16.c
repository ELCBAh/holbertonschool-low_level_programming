#include <stdio.h>
/**
 * main - initializes code
 * Description: counts in base 10
 * Return: numbers
 */
int main(void)
{
	char *base10 = "0123456789abcdef\n";
	int count;

	for (count = 0; count < 17; count++)
		putchar(base10[count]);
	return (0);
}
