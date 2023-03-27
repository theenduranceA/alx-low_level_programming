#include "main.h"

/**
 * print_array - Function that print n elements of an array of integers
 * @a: Array of integers
 * @n: Number of elements of array to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
	printf("%d", a[b]);
	if (b != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
