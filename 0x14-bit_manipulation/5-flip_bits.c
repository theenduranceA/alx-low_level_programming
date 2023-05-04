#include "main.h"

/**
 * flip_bits - Function that returns the number of bits needed to be flipped
 * @n: number to be flipped
 * @m: number to be flipped to
 *
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num;

	num = 0;
	n = n ^ m;
	while (n)
	{
		num = num + (n & 1);
		n >>= 1;
	}
	return (num);
}
