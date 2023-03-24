#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - init prot
 * @name: name to pass to callback function
 * @f: function to be called-back
 * Description: takes a set of chars and passes it to a callback function
 */
void print_name(char *name, void (*f)(char *n))
{
	int i, len = strlen(name);
	char *b;

	b = malloc(len + 1);
	for (i = 0; i < len; i++)
		b[i] = name[i];
	b[len + 1] = '\0';
	f(b);
	free(b);
}
