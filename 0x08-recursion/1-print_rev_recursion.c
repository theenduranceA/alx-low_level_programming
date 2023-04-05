#include "main.h"

/**
 * _print_rev_recursion - Function that prints a string in reverse
 * @s: The string to be printed
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
		return;
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
