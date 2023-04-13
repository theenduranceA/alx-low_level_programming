#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for an array.
 * @nmemb: Number of members.
 * @size: Size of memory.
 *
 * Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x = 0;
	unsigned int y = 0;
	char *zed;

	if (nmemb == 0 || size == 0)
		return (NULL);

	y = nmemb * size;
	zed = malloc(y);

	if (zed == NULL)
		return (NULL);

	while (x < y)
	{
		zed[x] = 0;
		x++;
	}
	return (zed);
}
