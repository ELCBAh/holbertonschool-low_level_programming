#include <stdio.h>
#include "2-main.h"
/**
 * print_alphabet - prints previous code 10x times
 * Description: Prints abc 10x
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int count = 0;

	for (count = 0; count < 11; count++)
	{
		print_alphabet_x10();
		{
			printf("abcdefghijklmnopqrstuvwxyz\n");
		}
	}
}
