#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - initializes
 *
 * Description: sends rand num in a string
 *
 * Return: number
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of n is greater than 5");
	if (n == 0)
		printf("Last digit of n is 0");
	if (n < 6 && n != 0)
		printf("Last digit of n is less than 6 and not 0");
	return (0);
}
