#include "main.h"
/**
 * get_bit - initializes prototype
 * @n: given number
 * @index: index to check number bit
 * Description: takes a number and checks its bit postition by giben index
 * Return: bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits;

	bits = sizeof(unsigned long int) * 8;
	if (index >= bits)
	{
		return (-1);
	}
	return ((n & (1ul << index)) >> index);
}
