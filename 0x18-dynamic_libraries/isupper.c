#include "main.h"

/**
 * _isupper - Prints uppercase character
 * @c: The character to check
 *
 * Return: 1 if uppercase lettr or 0 if otherwise
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	return (0);
}
