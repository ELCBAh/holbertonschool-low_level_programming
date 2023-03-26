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
		printf("Error\n");
		return (1);
	}
	if (argv[1][0] == '-' || atoi(argv[1]) <= 0)
	{
		printf("Error\n");
		return (2);
	}
	ptr = (char *)main;
	for (i = 0; i < atoi(argv[1]); i++)
		printf("%02hhx ", *(ptr + i));
	printf("\n");
	return (0);
}
