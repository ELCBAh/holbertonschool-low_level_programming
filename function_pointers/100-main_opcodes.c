#include <stdio.h>
/**
 * main - init main funct
 * @argc: arg count
 * @argv: arguments
 * Description: prints assemply opcodes in two numbers hexadecimal
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	unsigned char *ptr;
	int i;

	if (argc < 2 || sizeof(main) < atoi(argv[1]))
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("Error\n");
		return (2);
	}
	ptr = (unsigned char *)&main;
	for (i = 0; i < atoi(argv[1]); i++)
		printf("%02x ", *(ptr + i));
	printf("\n");
	return (0);
}
