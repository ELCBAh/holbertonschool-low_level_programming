#include <stdio.h>
#include "main.h"
/**
 * print_alphabetx10 - prints previous code 10x times
 * Description: Prints abc 10x
 * Return: 0
 */
void print_alphabet(void)
{
	int count = 0;

	for (count = 0; count < 11; count++)
	{
		print_alphabet();
		{
			printf("abcdefghijklmnopqrstuvwxyz\n");
		}
	}
}
