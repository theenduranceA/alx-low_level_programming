#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked
 * Return: 1 if c is an alphabetic letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
