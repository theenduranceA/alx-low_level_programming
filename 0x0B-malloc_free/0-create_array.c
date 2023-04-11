#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars &
 * initializes it with a specific char.
 * @size: Size of the array.
 * @c: char to be assigned.
 *
 * Return: Pointer or NULL.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *s;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (x = 0; x <= size; x++)
		s[x] = c;
	return (s);
}
