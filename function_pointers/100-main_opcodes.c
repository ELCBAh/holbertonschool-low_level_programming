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
	int i, val, main_size;

	val = atoi(argv[1]);
	main_size = sizeof(main);
	if (argc < 2 || main_size < val)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		return (2);
	}
	ptr = (unsigned char *)&main;
	for (i = 0; i < atoi(argv[1]); i++)
		printf("%02x ", *(ptr + 1));
	printf("\n");
	return (0);
}
