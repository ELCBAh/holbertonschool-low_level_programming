#include <stdio.h>
/**
 * main - initializes code
 * Description: putschar from a string
 * Return: every single char
 */
int main(void)
{
	char *abc = "abcdfghijklmnoprstuvwxyz";
	int count;

	for (count = 0; count < 25; count++)
		putchar(abc[count]);
	return (0);
}
