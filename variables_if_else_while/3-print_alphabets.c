#include <stdio.h>
/**
 * main - initializes code
 * Description: putschar from a string
 * Return: every single char
 */
int main(void)
{
	char *abc = "abcdefghijklmnopqrstuvwxyz";
	char *aBC = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	int count;

	for (count = 0; count < 27; count++)
		putchar(abc[count]);
	for (count = 0; count < 27; count++)
		putchar(aBC[count]);
	return (0);
}
