#include <stdio.h>
/**
 * main - initializes program
 * Description: prints message directly to strerr
 * Return: 1 (Success)
 */
int main(void)
{
	char *textVar = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fprintf(stderr , "%s" , textVar);
	return (1);
}
