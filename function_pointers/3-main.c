#ifndef MAIN_C
#define MAIN_C
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - initializes calculator
 * @argc: number of arguments passed
 * @argv: arguments passed
 * Description: calculator
 * Return: > 98 errors otherwise 0
 */
int main(int argc, char *argv[])
{
	int a, b, res;

	if (argc < 4)
	{
		printf("Error\n");
		return (98);
	}
	if (!strchr("+-*/%", argv[2][0]))
	{
		printf("Error\n");
		return (99);
	}
	if (((atoi(argv[2]) == 47) || (atoi(argv[2]) == 38)) && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		return (100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	res = get_op_func(argv[2])(a, b);
	printf("%d\n", res);
	return (0);
}
#endif
