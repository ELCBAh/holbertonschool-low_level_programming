#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - initializes prototype
 * @format: types of args passed
 * @...: args passed
 * Description: prints everything passed to the function and uses separator
 */
void print_all(const char * const format, ...)
{
	va_list any;
	const char *p = format, *chars = "icsf";
	int separator = 0;

	va_start(any, format);
	(format == NULL) ? putchar('\n'), va_end(any), (void)0 : (void)0;
	while (*p)
	{
		if (strchr(chars, *p))
		{
			switch (*p)
			{
				case 'i':
					printf("%d", va_arg(any, int));
					separator = 1;
					break;
				case 'c':
					printf("%c", va_arg(any, int));
					separator = 1;
					break;
				case 's':
					printf("%s", va_arg(any, char *));
					separator = 1;
					break;
				case 'f':
					printf("%f", va_arg(any, double));
					separator = 1;
					break;
				default:
					continue;
			}
			if (p == NULL)
				printf("(nil)");
			(separator == 1 && *(p + 1) != '\0') ? printf(", ") : 0;
			separator = 0;
		}
		p++;
	}
	va_end(any);
	putchar('\n');
}
