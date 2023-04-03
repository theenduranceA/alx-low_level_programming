#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @n: The first n bytes
 * @s: Pointer of memory area
 * @b: The value of byte to fill memory with
 * Return: A pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	x = 0;
	for (; x < n; x++)
	{
	s[x] = b;
	}
	return (s);
}
