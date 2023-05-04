#include "main.h"

/**
 * get_bit - Function that returns the value of a bit
 * @index: The index of bit to be gotten
 * @n: long integer
 *
 * Return: the value of the bit or -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	if (index > (sizeof(n) * 8 - 1))
		return (-1);

	num = (n >> index) & 1;

	return (num);
}
