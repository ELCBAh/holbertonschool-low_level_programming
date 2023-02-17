#include <stdio.h>
#include "main.h"
/**
 * print_sign - this funct checks for numbers
 * Description: will take n number and check its value
 * Return: result
 */
/**
 * @n: number input
 * Description: takes a number and stores it
 * Return: empty
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}
	if (n == 0)
	{
		putchar(48);
		return (0);
	}
	if (n < 0)
	{
		putchar(45);
		return (-1);
	}
}
