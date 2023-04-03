#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @n: Number of bytes copied
 * @src: Memory area copied from
 * @dest: Memory area copied to
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	int b;

	a = 0;
	b = n;
	for (; a < b; b++)
	{
	src[a] = dest[a];
	}
	return (dest);
}
