#include "main.h"
/**
 * flip_bits - initializes prototype
 * @n: first number to check
 * @m: second number to check
 * Description: takes to numbers and checks bits to flip
 * Return: count of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int count = 0;

	diff = n ^ m;
	while (diff != 0)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
