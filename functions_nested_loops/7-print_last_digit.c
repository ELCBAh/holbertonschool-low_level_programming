#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - takes a number
 * Description: takes a number and prints the last digit
 * Return: a value
 * @n: takes a number
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	putchar(_abs(last_digit) + '0');
	return (_abs(last_digit) + '0');
}
