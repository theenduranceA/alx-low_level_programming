#include "main.h"

/**
 * _strlen_recursion - Function that returns the length of a string.
 * @s: The string to be measured.
 * Return: Length of string.
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (s[a] != '\0')
	{
		a++;
		a +=

	_strlen_recursion(s + 1);
	}
	return (a);
}
