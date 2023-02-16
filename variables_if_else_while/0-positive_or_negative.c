#include <stdio.h>
int n = 0;
int main(void)
{
	if (n > 0) {
        	printf("is positive");
	}

	if (n < 0) {
		printf("is negative");
	} else {
		printf("is zero");
	}

	return (0);
}
