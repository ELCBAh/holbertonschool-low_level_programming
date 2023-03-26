#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - initializes prototype
 * @separator: defined separator
 * @n: number of args passed
 * @...: args passed
 * Description: prints every string passed to the function and uses separator
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *nsep;

	if (n == 0)
	{
		putchar('\n');
		return;
	}
	if (separator == NULL)
		nsep = "";
	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(string, const char *));
		if (separator == NULL && i < n - 1)
			printf("%s", nsep);
		else if (i < n - 1)
			printf("%s", separator);
	}
	va_end(string);
	putchar('\n');
}
