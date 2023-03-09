#include <stdio.h>
#include <stdlib.h>
/**
 * main - initializes function
 * Description: adds positive numbers
 * Return: 0
 */
/**
 * @argc: number of values
 */
/**
 * @argv: array
 */
int main(int argc, char *argv[])
{
	int add, i, j, *ad;

	add = 0;
	ad = &add;
	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		j = 0;
		i++;
	}
	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
			*ad = add + atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
