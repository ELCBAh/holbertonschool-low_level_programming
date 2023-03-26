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

	ptr = (unsigned char *)&main;
	for (i = 0; i < atoi(argv[1]); i++)
		printf("%02x ", *(ptr + 1));
	printf("\n");
	return (0);
}
