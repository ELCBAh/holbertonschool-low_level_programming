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
	int num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = (n % 10);

	if (num > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, num);
	if (num == 0)
		printf("Last digit of %d is %d and is 0\n", n, num);
	if (num < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
	return (0);
}
