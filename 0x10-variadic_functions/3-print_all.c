#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Function that prints anything.
 * @format: List of argument types.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int x = 0;
	char *s, *zed = "";

	va_start(args, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
			case 'c':
				printf("%s%c", zed, va_arg(args, int));
				break;

			case 'i':
				printf("%s%d", zed, va_arg(args, int));
				break;

			case 'f':
				printf("%s%f", zed, va_arg(args, double));
				break;

			case 's':
				s = va_arg(args, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", zed, s);
				break;
			default:
				x++;
				continue;
			}
			zed = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(args);
}
