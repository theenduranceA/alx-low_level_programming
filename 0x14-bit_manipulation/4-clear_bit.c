#include "main.h"

/**
 * clear_bit - Function that set the value of a bit to 0
 * @index: the index
 * @n: The given number of bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8 - 1)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
