#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 *@s: The string length to be calculated
 * Return: length
 *
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
	a++;
	s++;
	}
	return (a);
}
