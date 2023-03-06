#include "main.h"
/**
 * is_prime_number - checks if number is prime
 *
 * Return: 1 if true 0 if false
 */
/**
 * @n: number to check
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	if ((n % n) % 1 == 0)
		return (1);
	else
		return (0);
}
