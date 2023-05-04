#include "main.h"

/**
 * get_endianness - Function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int x;
	char *end_test;

	x = 1;
	end_test = (char *) &x;
	return (*end_test);
}
