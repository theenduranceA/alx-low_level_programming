#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer to the new string.
 * @str: The string.
 *
 * Return: A pointer or NULL.
 */

char *_strdup(char *str)
{
	int x = 0;
	int y = 0;
	char *zed;

	if (str == NULL)
		return (NULL);

	while (str[x] != '\0')
		x++;

	zed = malloc(sizeof(char) * (x + 1));

	if (zed == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		zed[y] = str[y];

	return (zed);
}
