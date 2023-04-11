
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat -Function that concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * Return: Pointer or NULL.
 *
 */

char *str_concat(char *s1, char *s2)
{
	int x = 0;
	int y = 0;
	char *zed;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = y = 0;
	while (s1[x] != 0)
		x++;

	while (s2[y] != 0)
		y++;

	zed = malloc(sizeof(char) * (x + y + 1));

	if (zed == NULL)
		return (NULL);

	x = y = 0;
	while (s1[x] != '\0')
	{
		zed[x] = s1[x];
		x++;
	}

	while (s2[y] != '\0')
	{
		zed[x] = s2[y];
		x++, y++;
	}

	zed[x] = '\0';
	return (zed);
}

