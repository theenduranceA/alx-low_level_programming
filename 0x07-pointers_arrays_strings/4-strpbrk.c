#include "main.h"

/**
 * _strpbrk - Function that searches a string
 * @s: The string
 * @accept: The bytes in the string
 *
 * Return: A pointer
 */

char *_strpbrk(char *s, char *accept)

{
	int x;

	x = 0;
	while (*s)
	{
	for (x = 0; accept[x] >= '\0'; x++)
	{
	if (*s == accept[x])
	return (s);
	}
	s++;
	}
	return ('\0');

}
