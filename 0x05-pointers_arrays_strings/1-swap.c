#include "main.h"


/**
 * swap_int - Function that swaps the values of two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
