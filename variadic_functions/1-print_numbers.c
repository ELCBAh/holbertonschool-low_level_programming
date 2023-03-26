#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - initializes prototype
 * @separator: defined separator
 * @n: number of ints passed
 * @...: ints passed
 * Description: prints every integer passed to the function and uses separator
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	char *nsep;

	if (n == 0)
	{
		putchar('\n');
		return;
	}
	if (separator == NULL)
		nsep = "";
	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator == NULL && i < n - 1)
			printf("%s", nsep);
		else if (i < n - 1)
			printf("%s", separator);
	}
	va_end(nums);
	putchar('\n');
}
