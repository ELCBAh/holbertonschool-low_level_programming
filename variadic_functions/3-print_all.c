#include <string.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - initializes prototype
 * @format: types of args passed
 * @...: args passed
 * Description: prints everything passed to the function and uses separator
 */
void print_all(const char * const format, ...)
{
	va_list any;
	const char *p = format;

	va_start(any, format);
	while (*p)
	{
		if (*p == '%')
		{
			p++;
			switch (*p)
			{
				case 'i':
					printf("%d", va_arg(any, int));
					break;
				case 'c':
					printf("%c", va_arg(any, int));
					break;
				case 's':
					printf("%s", va_arg(any, char *));
					break;
				case 'f':
					printf("%f", va_arg(any, double));
					break;
				default:
					continue;
			}
		}
		p++;
	}
	va_end(any);
	putchar('\n');
}
