#include "main.h"

/**
 * char *_strcpy - Function that prints the string pointed to by src
 * @src: First pointer
 * @dest: Second pointer
 *
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
	dest[a] = src[a];
	}
	dest[a++] = '\0';
	return (dest);
}
