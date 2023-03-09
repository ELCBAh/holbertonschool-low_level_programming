#include <stdio.h>
#include <stdlib.h>
/**
 * main - initializes function
 * Description: Multiplies two numbers
 * Return: 0
 */
/**
 * @argc: argument count
 */
/**
 * @argv: argument string
 */
int main(int argc, char *argv[])
{
	int a, b, mul;

	a = atoi(argv[argc - 2]);
	b = atoi(argv[argc - 1]);
	mul = a * b;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", mul);
	return (0);
}
