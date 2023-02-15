#include <stdio.h>
/**
 * main - initial
 *
 * Description: 'runs program'
 *
 * Returns: sizes
 */
int main(void)
{
	/**
	 * printf - sends text to stout
	 *
	 * Description: 'sends message to stoud'
	 *
	 * Returns: 0 (Success)
	 */
	printf("Size of a char: %ld byte\\(s\\)", sizeof(char));
	printf("Size of an int: %ld byte\\(s\\)", sizeof(int));
	printf("Size of a long int: %ld byte\\(s\\)", sizeof(long int));
	printf("Size of a long long int: %ld byte \\(s\\)", sizeof(long long int));
	printf("Size of a float: %ld byte \\(s\\)", sizeof(float));
	/**
	 * return - returns 0
	 *
	 * Description: 'sends 0'
	 *
	 * Returns: 0 (Success)
	 */
	return (0);
}
