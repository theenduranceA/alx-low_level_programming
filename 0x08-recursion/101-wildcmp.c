#include "main.h"

/**
 * wildcmp - Finction that compares strings
 * @s1: First string.
 * @s2: Second string.
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
		return (wildcmp(s1, s2 + 1);
		}
		return (*s2 == '\0');
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || (s2 + 1, s1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1);
	}
	return (0);
}
