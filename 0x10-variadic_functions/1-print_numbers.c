#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Function that prints nmubers.
 * @n: Number of integers.
 * @separator: The string to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x = 0;

	va_start(args, n);
	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(args, int));
		if (x < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
