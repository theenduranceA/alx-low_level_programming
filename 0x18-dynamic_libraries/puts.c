#include "main.h"

/**
 * _puts - Function that prints a string
 * @str: String to be printed
 *
 * Return: void
 */

void _puts(char *str)

{

	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');

}
