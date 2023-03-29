#include "main.h"

/**
 * _strncat - Function that concatenates two strings
 * @dest: First string
 * @src: Second string
 * @n: Number of bytes from src
 * Return: A pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a++])
	{
	b++;
	}
	for (a = 0; src[a] && a < n; a++)
	{
	dest[b++] = src[a];
	}
	return (dest);

}
