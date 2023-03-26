#include <stdlib.h>
#include <stdio.h>
/**
 * main - init main funct
 * @argc: arg count
 * @argv: arguments
 * Description: prints assemply opcodes in two numbers hexadecimal
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char *ptr;
	int i;

	if (argc < 2)
	{
		fprintf(stderr, "Error\n");
		exit(1);
	}
	long num_bytes = strtol(argv[1], NULL, 10);

	if (num_bytes <= 0)
	{
		fprintf(stderr, "Error\n");
		exit(2);
	}
	ptr = (char *)main;
	for (i = 0; i < num_bytes; i++)
		printf("%02hhx ", *(ptr + i));
	printf("\n");
	return (0);
}
