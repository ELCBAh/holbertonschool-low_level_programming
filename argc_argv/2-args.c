#include <stdio.h>
/**
 * main - initialize function
 * Description: Prints all arguments
 * Return: 0
 */
/**
 * @argc: number of arguments
 */
/**
 * @argv: array of arguments
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
