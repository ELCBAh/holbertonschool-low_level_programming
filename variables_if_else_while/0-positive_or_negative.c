#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - initializes code
 * Description: takes a number and checks if number is possitive or negative
 * Return: True or false and prints
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positiv\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	return (0);
}
