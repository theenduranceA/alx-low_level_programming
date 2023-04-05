#include "main.h"

/**
 * _print_rev_recursion - Function that prints a string in reverse
 * @s: The string to be printed
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{

	int c = 0;

	if (s[c] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[c]);
	}
}
