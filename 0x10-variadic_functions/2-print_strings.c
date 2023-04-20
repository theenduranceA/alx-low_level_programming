#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Function that prints string.
 * @n: The number of strings.
 * @separator: The string to be printed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x = 0;
	char *zed;

	va_start(args, n);
	for (x = 0; x < n; x++)
	{
		zed = va_arg(args, char *);
		if (zed == NULL)
			printf("(nil)");
		else
			printf("%s", zed);
		if (x < n - 1 && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");
	va_end(args);
}
