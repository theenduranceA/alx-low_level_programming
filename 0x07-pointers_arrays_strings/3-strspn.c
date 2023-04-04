#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: First segment byte
 * @accept; Second segment byte
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;
	int x;
	int y;

	len = 0;
	for (x = 0; s[x] != '\0'; x++)
	{
	for (y = 0; accept[y] >= '\0'; y++)
	{
	if (s[x] == accept[y])
	{
	len += 1;
	break;
	}
	if (accept[y] == '\0')
	{
	return (len);
	}
	}
	}
	return (len);
}
