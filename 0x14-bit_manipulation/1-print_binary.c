#include "main.h"
#include <stdio.h>

/**
 * print_binary - Function that prints the binary rep of a number
 * @n: The number to be printer in binary
 *
 */

void print_binary(unsigned long int n)
{

	int x;
	int num;

	if (n == 0)
		_putchar('0');
	for (num = 0, x = 63; x >= 0; x--)
	{
		if ((n >> x) & 1)
		num = 1;
		if (num == 1)
			((n >> x) & 1) ? _putchar('1') : _putchar('0');
	}
}
