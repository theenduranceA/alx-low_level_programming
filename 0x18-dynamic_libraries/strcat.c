#include "main.h"

/**
 * _strcat - Function that concatenates two strings
 * @dest: The first string
 * @src: The second string
 * Return: A pointer
 */

char *_strcat(char *dest, char *src)

{
	int a = 0, i;

	while (dest[a])
	{
		a++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[a] = src[i];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
