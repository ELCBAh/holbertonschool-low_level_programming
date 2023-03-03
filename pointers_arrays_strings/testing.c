#include <string.h>
#include <stdio.h>
int main(void)
{
	int i = 24;
	int len = strlen(i);
	int len2 = strlen(i) - 1;

	printf("len = %d\n", len);
	printf("len -1 = %d\n", len2);
	return (0);
}
