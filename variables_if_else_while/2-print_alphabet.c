#include <stdio.h>
/**
 * */
int main(void)
{
	char *abc = "abcdefghijklmnopqrstuvwxyz\n";
	int count;

	for (count = 0; count < 27; count++)
		putchar(abc[count]);
	return (0);
}
