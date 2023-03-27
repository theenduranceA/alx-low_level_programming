#include "main.h"

/**
 * _atoi - Function that converts a string to an integer
 * @s: The string to be converted
 *
 * Return: Integer
 */

int _atoi(char *s)

{
	int a = 0;
	int b = 0;
	int c = 1;
	int xyz = 0;

	while (s[a])
	{
	if (s[a] == 45)
	{
	c *= -1;
	}
	while (s[a] >= 48 && s[a] <= 57)
	{
	xyz = 1;
	b = (b * 10) + (s[a] - '0');
	a++;
	}
	if (xyz == 1)
	{
	break;
	}
	a++;
	}
	b *= c;
	return (b);
}
