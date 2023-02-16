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
		printf("%d is positive", n);
	if (n < 0)
		printf("%d is negative", n);
	else
		printf("%d is zero", n);
	return (0);
}
