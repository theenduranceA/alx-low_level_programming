#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that sums all parameters.
 * @n: Number of parameters.
 * @...: Number of parameters to be summed.
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int x = 0;
	int add = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (x = 0; x < n; x++)
	{
		add = add + va_arg(args, int);
	}
	va_end(args);
	return (add);
}
