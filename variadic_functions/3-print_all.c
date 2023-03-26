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

	va_start(any, format);
	(format == NULL) ? putchar('\n'), va_end(any), (void)0 : (void)0;
	while (*p)
	{
		if (strchr(chars, *p))
		{
			switch (*p)
			{
				case '\0':
					printf("(nil)");
					break;
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
			if (*p != '\0')
				printf(", ");
		}
		p++;
	}
	va_end(any);
	putchar('\n');
}
