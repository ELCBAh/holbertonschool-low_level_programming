#include "main.h"
/**
 * set_bit - initializes prototype
 * @n: pointer to number to modify
 * @index: index to change bit to 1
 * Description: takes a number and changes on index to 1
 * Return: -1 if fails 1 if succeeds
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;
	unsigned int len;

	len = sizeof(*n) * 8;
	if (index >= len)
		return (-1);
	bitmask = 1ul << index;
	*n |= bitmask;
	return (1);
}
