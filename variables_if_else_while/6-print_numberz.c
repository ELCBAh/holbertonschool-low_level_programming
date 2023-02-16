#include <stdio.h>
/**
 * main - initializes code
 * Description: counts in base 10
 * Return: numbers
 */
int main(void)
{
	/**int base10[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};*/
	int count;

	for (count = 0; count < 10; count++)
		putchar(count + '0');
	return (0);
}
