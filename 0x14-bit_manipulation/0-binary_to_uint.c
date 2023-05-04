#include "main.h"

/**
 * binary_to_uint - Function that converts binary to unsigned int
 * @b: Pointer to the string
 *
 * Return: The converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int x;

	num = 0;
	x = 0;
	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0')
			return (0);
		if (b[x] > '1')
			return (0);
		num = 2 * num + (b[x] - '0');
	}

	return (num);
}
