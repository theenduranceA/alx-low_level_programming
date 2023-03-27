#include "main.h"

/**
 * print_rev - Function that prints a string in reverse
 * @s: The string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
	a++;
	}
	for (a -= 1; a >= 0; a--)
	{
	_putchar(s[a]);
	}
	_putchar('\n');
}
