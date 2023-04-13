#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * string_nconcat -Function that concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes.
 * Return: Pointer or NULL.
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x = 0, y = 0, len1 = 0, len2 = 0;
	char *zed;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x])
		x++;

	while (s2[len1])
		len1++;

	if (n >= len1)
		len2 = x + len1;

	else
		len2 = x + n;

	zed = malloc(sizeof(char) * (len2 + 1));

	if (zed == NULL)
		return (NULL);

	len1 = 0;
	while (y < len2)
	{
		if (y <= x)
			zed[y] = s1[y];

		if (y >= x)
		{
			zed[y] = s2[len1];
			len1++;
		}
		y++;

	}
	zed[y] = '\0';
	return (zed);
}
