#include "main.h"
/**
 * _sqrt_recursion - value of n square root
 * Return: its value
 */
/**
 * @n: number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion((n * 2) - 1) / n);
}
