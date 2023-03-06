#include "main.h"
/**
 * factorial - factorial from a given number
 * Return: lower than 0 returns -1
 */
/**
 * @n: given number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	if (n != '\0')
		return (n * factorial(n - 1));
	return (0);
}
